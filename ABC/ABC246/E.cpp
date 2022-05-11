#include <iostream>
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

typedef pair<int, int> p;
const int INF = 1000000000;

int main() {
    int n;
    cin >> n;
    int ax,ay,bx,by;
    cin >> ax >> ay >> bx >> by;
    string s[n];
    for(int i=0;i<n;i++) cin >> s[i];
    int dx[4] = {1, 1, -1, -1}, dy[4] = {1, -1, -1, 1};

    int num[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) num[i][j] = INF;
    }

    queue<p> q;
    q.push(p(ax-1, ay-1));
    num[ax-1][ay-1] = 0;

    while(!q.empty()) {
        p point = q.front(); q.pop();
        int cnt = num[point.first][point.second];
        for(int i=0;i<4;i++) {
            int x = point.first + dx[i];
            int y = point.second + dy[i];
            while(0<=x && x<n && 0<=y && y<n && s[x][y] == '.') {
                if(num[x][y] > cnt + 1) {
                    num[x][y] = cnt + 1;
                    q.push(p(x, y));
                }
                if(num[x][y] <= cnt) break;
                x += dx[i], y += dy[i];
            }
        }
    }

    if(num[bx-1][by-1] == INF) cout << "-1" << endl;
    else cout << num[bx-1][by-1] << endl;
    
    return  0;
}