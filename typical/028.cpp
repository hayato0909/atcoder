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
    map<int, int> ans;

    for(int i=1;i<=n;i++) {
        cin >> lx[i] >> ly[i] >> rx[i] >> ry[i];
    }
    int board[1001][1001];
    for(int i=0;i<=1000;i++) {
        for(int j=0;j<=1000;j++) board[i][j] = 0;
    }

    for(int i=1;i<=n;i++) {
        board[lx[i]][ly[i]]++;
        board[rx[i]][ry[i]]++;
        board[lx[i]][ry[i]]--;
        board[rx[i]][ly[i]]--;
    }

    for(int i=1;i<=1000;i++) {
        for(int j=0;j<=1000;j++) {
            board[i][j] += board[i-1][j];
        }
    }

    for(int i=1;i<=1000;i++) {
        for(int j=0;j<=1000;j++) {
            board[j][i] += board[j][i-1];
        }
    }

    for(int i=0;i<=1000;i++) {
        for(int j=0;j<=1000;j++) {
            ans[board[i][j]]++;
        }
    }

    for(int i=1;i<=n;i++) cout << ans[i] << endl;
}