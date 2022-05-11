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

int main() {
    int h,w; cin >> h >> w;
    int r,c; cin >> r >> c;
    int ans = 0;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
    for(int i=0;i<4;i++) {
        int xx = r + dx[i], yy = c + dy[i];
        if(1 <= xx && xx <=h && 1 <= yy && yy <= w) ans++;
    }
    cout << ans << endl;
}