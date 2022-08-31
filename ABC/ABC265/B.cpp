#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, m ,t; cin >> n >> m >> t;
    ll a[n];
    for(int i=1;i<n;i++) cin >> a[i];
    ll b[n+1];
    for(int i=0;i<=n;i++) b[i] = 0;
    int x, y;
    for(int i=0;i<m;i++) {
        cin >> x >> y;
        b[x] = y;
    }

    string ans = "Yes";
    for(int i=1;i<n;i++) {
        if(t <= a[i]) {
            ans = "No";
            break;
        }
        t -= a[i];
        t += b[i+1];
    }
    cout << ans << endl;
}