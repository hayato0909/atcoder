#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, m;
    cin >> n >> m;
    ll a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    a[0] = 0;
    ll sum[n+1];
    sum[0] = 0;
    for(int i=1;i<=m-1;i++) sum[i] = sum[i-1] + a[i];
    for(int i=m;i<=n;i++) sum[i] = sum[i-1] + a[i] - a[i-m];
    ll ans;
    ll num = 0;
    for(int i=1;i<=m;i++) num += i * a[i];
    ans = num;
    for(int i=m+1;i<=n;i++) {
        num -= sum[i-1];
        num += m * a[i];
        ans = max(ans, num);
    }
    cout << ans << endl;
}