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
typedef long long ll;

int main() {
    int n,m,k;
    cin >> n >> m >> k;
    ll dp[n+1][k+1];

    dp[1][0] = 0;
    for(int i=1;i<=m;i++) dp[1][i] = dp[1][i-1] + 1;
    for(int i=m+1;i<=k;i++) dp[1][i] = dp[1][i-1];

    for(int i=2;i<=n;i++) {
        dp[i][0] = 0;
        for(int j=1;j<=k;j++) {
            int low = max(0, j-1-m);
            dp[i][j] = (dp[i][j-1] + (dp[i-1][j-1] - dp[i-1][low])) % mod;
            if(dp[i][j] < 0) dp[i][j] += mod;
        }
    }

    cout << dp[n][k] << endl;
}