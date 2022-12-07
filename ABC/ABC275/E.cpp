#include <bits/stdc++.h>
#include <atcoder/modint>

using namespace std;
using mint = atcoder::modint998244353;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, ll> P;

int main() {
    int n, m, k; cin >> n >> m >> k;
    vector<vector<mint>> dp(k+1, vector<mint>(n+1, mint(0)));
    mint p = mint(1) / m;

    dp[0][0] = mint(1);
    rep(i, 1, k+1) {
        dp[i][n] = dp[i-1][n];
        rep(j, 0, n) {
            rep(k, 1, m+1) {
                int next = j + k;
                if(next > n) next = n - (next - n);
                dp[i][next] += dp[i-1][j] * p;
            }
        }
    }
    cout << dp[k][n].val() << endl;
}