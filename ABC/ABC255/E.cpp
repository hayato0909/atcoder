#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n,m; cin >> n >> m;
    ll s[n];
    for(int i=1;i<n;i++) cin >> s[i];
    ll x[m+1];
    for(int i=1;i<=m;i++) cin >> x[i];
    ll a[n+1];
    a[1] = 0;
    for(int i=2;i<=n;i++) a[i] = s[i-1] - a[i-1];
    map<ll, int> M;
    int ans = 0;
    for(int i=1;i<=n;i++) {
        ll w;
        if(i % 2 == 1) w = 1;
        else w = -1;
        for(int j=1;j<=m;j++) {
            ll now = w * (x[j] - a[i]);
            M[now]++;
            ans = max(ans, M[now]);
        }
    }
    cout << ans << endl;
}