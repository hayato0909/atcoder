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

const int INF = 100000;

int main() {
    int h, w; cin >> h >> w;
    char s[h+1][w+1];
    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) cin >> s[i][j];
    }
    int dp[h+1][w+1];
    if(s[1][1] == '#') dp[1][1] = 1;
    else dp[1][1] = 0;

    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) {
            if(i==1 && j==1) continue;
            int tmp1 = INF, tmp2 = INF;
            if(i > 1) {
                tmp1 = dp[i-1][j];
                if(s[i-1][j]=='.' && s[i][j]=='#') tmp1++;
            }
            if(j > 1) {
                tmp2 = dp[i][j-1];
                if(s[i][j-1]=='.' && s[i][j]=='#') tmp2++;
            }
            dp[i][j] = min(tmp1, tmp2);
        }
    }
    cout << dp[h][w] << endl;
}