#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(m), b(m);
    vector<ll> c(m);
    rep(i, 0, m) cin >> a[i] >> b[i] >> c[i];
    vector<vector<P>> g(n);
    rep(i, 0, m) g[a[i]-1].push_back(P(b[i]-1, c[i]));

    vector<vector<ll>> dp(n, vector<ll>(n, -1ll));
    ll ans = 0;
    rep(i, 0, m) {
        dp[a[i]-1][b[i]-1] = c[i];
    }

    rep(i, 0, n) dp[i][i] = 0;

    rep(k, 0, n) {
        rep(i, 0, n) {
            if (i == k) continue;
            if (dp[i][k] == -1) continue;
            rep(j, 0, n) {
                if (dp[k][j] != -1) {
                    if (dp[i][j] != -1) dp[i][j] = min(dp[i][j], dp[i][k]+dp[k][j]);
                    else dp[i][j] = dp[i][k]+dp[k][j];
                }
            }
        }
        rep(i, 0, n) {
            rep(j, 0, n) {
                // cout << dp[i][j] << " ";
                if (dp[i][j] != -1) ans += dp[i][j];
            }
            // cout << endl;
        }
    }
    cout << ans << endl;
}