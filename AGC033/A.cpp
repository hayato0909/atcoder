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

typedef pair<int, int> P;

int h,w;
string a[1000];
int num[1000][1000];

int main() {
    cin >> h >> w;
    for(int i=0;i<h;i++) cin >> a[i];

    queue<P> q;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            if(a[i][j] == '#') {
                q.push(P(i, j));
                num[i][j] = 0;
            }
        }
    }

    while(!q.empty()) {
        int x = q.front().first, y = q.front().second;
        q.pop();
        for(int i=0;i<4;i++) {
            int xx = x + dx[i], yy = y + dy[i];
            if(0<=xx && xx < h && 0<=yy && yy<w) {
                if(a[xx][yy] != '#') {
                    num[xx][yy] = num[x][y] + 1;
                    q.push(P(xx, yy));
                    a[xx][yy] = '#';
                }
            }
        }
    }

    int ans = 0;
    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) ans = max(ans, num[i][j]);
    }
    cout << ans << endl;
}