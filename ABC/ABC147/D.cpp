#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

using mint = modint1000000007;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];
    vector<vector<ll>> dp(60, vector<ll>(n));
    rep(i, 0, 60) {
        if (a[n-1] & (1ll << i)) dp[i][n-1] = 1;
        else dp[i][n-1] = 0;
        for (int j = n - 2; j >= 0; j--) {
            if (a[j] & (1ll << i)) dp[i][j] = dp[i][j+1] + 1;
            else dp[i][j] = dp[i][j+1];
        }
    }

    mint ans = 0;
    rep(i, 0, 60) rep(j, 0, n-1) {
        if (a[j] & (1ll << i)) {
            ans += mint(1ll << i) * (n - 1 - j - dp[i][j+1]);
        } else {
            ans += mint(1ll << i) * dp[i][j+1];
        }
    }
    cout << ans.val() << endl;
}