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
    int h,w; cin >> h >> w;
    string s[h];
    for(int i=0;i<h;i++) cin >> s[i];
    int dp[h][w];
    int sumx[h][w], sumy[h][w], sum[h][w];
    dp[0][0] = 0;
    sumx[0][0] = 0;
    sumy[0][0] = 0;
    sum[0][0] = 0;
    bool flagx=true, flagy=true, flag=true;

    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            dp[i][j] = 0;
            if(s[i][j] == '#') {
                sumx[i][j] = 0;
                sumy[i][j] = 0;
                sum[i][j] = 0;
                if(i==0) flagx=false;
                if(j==0) flagy=false;
                if(i==j) flag=false;
            } else {
                if(i==0 && j==0) continue;
                if(flagx && i==0) dp[i][j]++;
                if(flagy && j==0) dp[i][j]++;
                if(flag && i==j) dp[i][j]++;
                if(j>0) dp[i][j] = (dp[i][j] + sumx[i][j-1]) % mod;
                if(i>0) dp[i][j] = (dp[i][j] + sumy[i-1][j]) % mod;
                if(i>0 && j>0)dp[i][j] = (dp[i][j] + sum[i-1][j-1]) % mod;
                if(j>0) sumx[i][j] = (sumx[i][j-1] + dp[i][j]) % mod;
                else sumx[i][j] = dp[i][j];
                if(i>0) sumy[i][j] = (sumy[i-1][j] + dp[i][j]) % mod;
                else sumy[i][j] = dp[i][j];
                if(i>0 && j>0) sum[i][j] = (sum[i-1][j-1] + dp[i][j]) % mod;
                else sum[i][j] = dp[i][j];
            }
        }
    }

    cout << dp[h-1][w-1] << endl;
}