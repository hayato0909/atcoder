#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod = 998244353;

int main() {
    ll n,m; cin >> n >> m;
    int len = 1;
    while(m >= ((ll)1 << len)) len++;
    if(len < n) {
        cout << "0" << endl;
        return 0;
    }
    ll num[len+1];
    num[1] = 1;
    for(int i=2;i<len;i++) num[i] = num[i-1]*2;
    num[len] = m - ((ll)1 << (len-1)) + 1;
    ll dp[len+1][n+1];
    for(int i=0;i<=n;i++) dp[1][i] = 0;
    dp[1][1] = 1;
    ll two = 1;
    for(int i=2;i<=len;i++) {
        two = num[i] % mod;
        dp[i][1] = (two + dp[i-1][1]) % mod;
        for(int j=2;j<=n;j++) {
            dp[i][j] = dp[i-1][j-1]*two%mod;
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % mod;
        }
    }
    cout << dp[len][n] << endl;
}