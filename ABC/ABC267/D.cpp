#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, m;
    cin >> n >> m;
    ll a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    a[0] = 0;
    ll dp[n+1][n+1];
    for(int i=0;i<=n;i++) dp[i][0] = 0;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            if(i == j) dp[i][j] = dp[i-1][j-1] + j * a[i];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-1] + j * a[i]);
        }
    }
    ll ans = dp[m][m];
    for(int i=m;i<=n;i++) ans = max(ans, dp[i][m]);
    cout << ans << endl;
}