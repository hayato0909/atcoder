#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod = 998244353;

int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    if(k == 0) {
        ll ans = 1;
        for(int i=1;i<=n;i++) {
            ans = (ans * m) % mod; 
        }
        cout << ans << endl;
        return 0;
    }
    ll dp[n+1][m+1];
    dp[1][0] = 0;
    for(int i=1;i<=m;i++) dp[1][i] = dp[1][i-1] + 1;
    for(int i=2;i<=n;i++) {
        dp[i][0] = 0;
        for(int j=1;j<=m;j++) {
            int l = j - k, r = j + k;
            dp[i][j] = dp[i][j-1];
            if(l >= 1) {
                dp[i][j] = (dp[i][j] + dp[i-1][l])%mod;
            }
            if(r <= m) {
                dp[i][j] = (dp[i][j] + (dp[i-1][m] - dp[i-1][r-1]))%mod;
                while(dp[i][j] < 0) dp[i][j] += mod;
            }
        }
    }
    cout << dp[n][m] << endl;
}