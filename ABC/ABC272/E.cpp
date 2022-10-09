#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main() {
    ll n, m; cin >> n >> m;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    vector<int> v[m+1];
    for(int i=1;i<=n;i++) {
        int l = max(0, -a[i]/i);
    }

    for(int i=1;i<=m;i++) {
        bool exist[n+1] = {};
        for(int j:v[i]) {
            exist[j] = true;
        }
        int ans = 0;
        while(exist[ans]) ans++;
        cout << ans << endl;
    }
}