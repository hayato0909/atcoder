#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod = 998244353;

int main() {
    int n; cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    ll dp[n+1][10];
    for(int i=0;i<10;i++) dp[1][i] = 0;
    dp[1][a[1]] = 1;

    for(int i=2;i<=n;i++) {
        for(int j=0;j<10;j++) dp[i][j] = 0;
        for(int j=0;j<10;j++) {
            dp[i][(j+a[i])%10] = (dp[i][(j+a[i])%10] + dp[i-1][j]) % mod;
            dp[i][(j*a[i])%10] = (dp[i][(j*a[i])%10] + dp[i-1][j]) % mod;
        }
    }
    
    for(int i=0;i<10;i++) {
        cout << dp[n][i] << endl;
    }
}