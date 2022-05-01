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

int main() {
    int h, w; cin >> h >> w;
    int c[10][10];
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) cin >> c[i][j];
    }
    int num[10] = {};
    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) {
            int tmp;
            cin >> tmp;
            if(tmp != -1) num[tmp]++;
        }
    }
    int dp[10];
    for(int i=0;i<10;i++) dp[i] = c[i][1];
    bool flag = true;
    while(flag) {
        flag = false;
        for(int i=0;i<10;i++) {
            for(int j=0;j<10;j++) {
                if(dp[i] > c[i][j] + dp[j]) {
                    flag = true;
                    dp[i] = c[i][j] + dp[j];
                }
            }
        }
    }

    int ans = 0;
    for(int i=0;i<10;i++) {
        ans += num[i] * dp[i];
    }
    cout << ans << endl;
}