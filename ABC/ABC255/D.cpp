#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n,q; cin >> n >> q;
    ll a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    sort(a+1, a+n+1);
    ll sum[n+1];
    sum[0] = 0;
    for(int i=1;i<=n;i++) sum[i] = sum[i-1] + a[i];

    ll x;
    for(int i=1;i<=q;i++) {
        cin >> x;
        int idx = lower_bound(a+1, a+n+1, x) - a;
        ll ans = 0;
        ans += x*(idx-1) - sum[idx-1];
        ans += (sum[n] - sum[idx-1]) - x*(n-idx+1);
        cout << ans << endl;
    }
}