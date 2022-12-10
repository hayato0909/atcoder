#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

int main() {
    ll n, k, d; cin >> n >> k >> d;
    vector<ll> a(n+1);
    rep(i, 1, n+1) cin >> a[i];
    vector<vector<vector<ll>>> dp(n+1, vector<vector<ll>>(k+1, vector<ll>(d, -1)));

    dp[0][0][0] = 0;
    rep(i, 1, n+1) {
        dp[i][0][0] = 0;
        rep(j, 1, k+1) {
            rep(k, 0, d) {
                int pos = (k - a[i] % d) % d;
                while(pos < 0) pos += d;
                if(dp[i-1][j-1][pos] == -1) dp[i][j][k] = dp[i-1][j][k];
                else dp[i][j][k] = max(dp[i-1][j][k], dp[i-1][j-1][pos]+a[i]);
            }
        }
    }
    cout << dp[n][k][0] << endl;
}