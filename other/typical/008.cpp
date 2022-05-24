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

const int mod = 1000000007;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int dp[7][n+1];
    for(int i=0;i<7;i++) dp[i][0] = 0;

    string check = "atcoder";
    for(int i=1;i<=n;i++) {
        for(int j=0;j<7;j++) {
            if(s[i-1] == check[j]) {
                if(j == 0) dp[j][i] = (dp[j][i-1] + 1) % mod;
                else dp[j][i] = (dp[j][i-1] + dp[j-1][i-1]) % mod;
            } else dp[j][i] = dp[j][i-1];
        }
    }

    cout << dp[6][n] << endl;
    return 0;
}