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
        if(a[i] >= n) continue;
        int l;
        if(a[i] >= 0) l = 1;
        else l = (-a[i] + i - 1) / i;
        int r = min(m + 1, (n - a[i] + i - 1) / i);
        for(int j=l;j<r;j++) v[j].push_back(a[i] + j * i);
    }

    for(int i=1;i<=m;i++) {
        set<int> s;
        for(int j:v[i]) s.insert(j);
        int ans = 0;
        for(ans = 0;ans <= n;ans++) {
            if(!s.count(ans)) break;
        }
        cout << ans << endl;
    }
}