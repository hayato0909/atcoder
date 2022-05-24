#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 998244353;

int main() {
    int n,m,k; cin >> n >> m >> k;
    vector<int> e[n+1];
    int u, v;
    for(int i=0;i<m;i++) {
        cin >> u >> v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
    ll dp[k+1][n+1];
    for(int i=1;i<=n;i++) dp[0][i] = 0;
    dp[0][1] = 1;

    for(int i=1;i<=k;i++) {
        ll tot = 0;
        for(int j=1;j<=n;j++) tot = (tot + dp[i-1][j]) % mod;
        for(int j=1;j<=n;j++) {
            dp[i][j] = tot - dp[i-1][j];
            while(dp[i][j] < 0) dp[i][j] += mod;
            for(int k:e[j]) {
                dp[i][j] -= dp[i-1][k];
                while(dp[i][j] < 0) dp[i][j] += mod;
            }
        }
    }

    cout << dp[k][1] << endl;
}