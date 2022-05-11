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

int main() {
    int h,w; cin >> h >> w;
    char c[h+1][w+1];
    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) cin >> c[i][j];
    }
    int num[h+1][w+1];
    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) num[i][j] = -1;
    }

    queue<p> q;
    q.push(p(1, 1));
    num[1][1] = 1;

    while(!q.empty()) {
        p point = q.front(); q.pop();
        int x = point.first, y = point.second;
        if(y+1<=w && c[x][y+1] == '.' && num[x][y+1] == -1) {
            num[x][y+1] = num[x][y] + 1;
            q.push(p(x, y+1));
        }
        if(x+1<=h && c[x+1][y] == '.' && num[x+1][y] == -1) {
            num[x+1][y] = num[x][y] + 1;
            q.push(p(x+1, y));
        }
    }

    int ans = 0;
    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) {
            ans = max(ans, num[i][j]);
        }
    }

    cout << ans << endl;
}