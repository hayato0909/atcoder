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

const int INF = 1000000000;

int main() {
    int h,n; cin >> h >> n;
    int a[n+1],b[n+1];
    for(int i=1;i<=n;i++) cin >> a[i] >> b[i];
    int dp[n+1][h+1];
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=h;j++) dp[i][j] = INF;
    }
    dp[1][0] = 0;

    for(int i=1;i<=n;i++) {
        for(int j=0;j<h;j++) {
            dp[i][j] = min(dp[i][j], dp[i-1][j]);
            if(j - a[i] >= 0) dp[i][j] = min(dp[i][j], dp[i][j-a[i]]+b[i]);
        }
        int m = INF;
        for(int j=h-a[i];j<h;j++) m = min(m, dp[i][j]);
        dp[i][h] = min(m+b[i], dp[i-1][h]);
    }
    cout << dp[n][h] << endl;
}