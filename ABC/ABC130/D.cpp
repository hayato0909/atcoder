#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n+1);
    rep(i, 1, n+1) cin >> a[i];
    vector<ll> sum(n+1);
    sum[0] = 0;
    rep(i, 1, n+1) sum[i] = sum[i-1] + a[i];
    ll ans = 0;
    rep(i, 1, n+1) {
        ll num = k + sum[i-1];
        ll idx = lower_bound(sum.begin(), sum.end(), num) - sum.begin();
        ans += n - idx + 1;
    }
    cout << ans << endl;
}