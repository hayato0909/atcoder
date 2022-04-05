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
    int n;
    cin >> n;
    int lx[n+1],ly[n+1],rx[n+1],ry[n+1];
    for(int i=1;i<=n;i++) {
        cin >> lx[i] >> ly[i] >> rx[i] >> ry[i];
    }
    int board[1001][1001];
    for(int i=0;i<=1000;i++) {
        for(int j=0;j<=1000;j++) board[i][j] = 0;
    }

    for(int i=1;i<=n;i++) {
        for(int x=lx[i];x<rx[i];x++) {
            for(int y=ly[i];y<ry[i];y++) {
                board[x][y]++;
            }
        }
    }

    int cnt[n+1];
    for(int i=0;i<=n;i++) cnt[i] = 0;
    for(int x=0;x<=1000;x++) {
        for(int y=0;y<=1000;y++) {
            cnt[board[x][y]]++;
        }
    }

    for(int i=1;i<=n;i++) cout << cnt[i] << endl;
    return 0;
}