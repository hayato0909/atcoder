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
    char s[h][w];
    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) cin >> s[i][j];
    }

    int ans = 0;
    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            if(s[i][j] == '.') {
                if(j+1<w && s[i][j+1] == '.') ans++;
                if(i+1<h && s[i+1][j] == '.') ans++;
            }
        }
    }
    cout << ans << endl;
}