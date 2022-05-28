#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w; cin >> h >> w;
    string s[h];
    for(int i=0;i<h;i++) cin >> s[i];
    int ax=-1, ay, bx, by;
    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            if(s[i][j] == 'o') {
                if(ax == -1) {
                    ax = i;
                    ay = j;
                } else {
                    bx = i;
                    by = j;
                }
            }
        }
    }
    int ans = abs(ax - bx) + abs(ay - by);
    cout << ans << endl;
}