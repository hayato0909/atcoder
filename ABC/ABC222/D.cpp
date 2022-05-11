#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
using namespace std;

const int mod = 998244353;

int main() {
    int n; cin >> n;
    int a[n+1], b[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++) cin >> b[i];
    int dp[n+1][3001];
    for(int i=0;i<=n;i++) dp[1][i] = 0;
    dp[1][a[1]] = 1;
    for(int i=a[1]+1;i<=b[1];i++) dp[1][i] = dp[1][i-1] + 1;
    for(int i=b[1]+1;i<=3000;i++) dp[1][i] = dp[1][i-1];
    
    for(int i=2;i<=n;i++) {
        dp[i][a[i]] = dp[i-1][a[i]];
        for(int j=a[i]+1;j<=b[i];j++) {
            dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % mod;
        }
        for(int j=b[i]+1;j<=3000;j++) dp[i][j] = dp[i][j-1];
    }
    cout << dp[n][3000] << endl;
}