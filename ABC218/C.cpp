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
    int n; cin >> n;
    string s[n], t[n];
    for(int i=0;i<n;i++) cin >> s[i];
    for(int i=0;i<n;i++) cin >> t[i];
    int mintx=n, maxtx=-1, minty=n, maxty=-1;
    int nums = 0, numt = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(s[i][j] == '#') nums++;
            if(t[i][j] == '#') {
                mintx = min(mintx, j);
                maxtx = max(maxtx, j);
                minty = min(minty, i);
                maxty = max(maxty, i);
                numt++;
            }
        }
    }
    if(nums == numt) {
        if(nums == 0) {
            cout << "Yes" << endl;
            return 0;
        }
        for(int c=0;c<4;c++) {
            string nexts[n];
            for(int i=0;i<n;i++) {
                for(int j=0;j<n;j++) {
                    nexts[i] += '.';
                }
            }
            for(int i=0;i<n;i++) {
                for(int j=0;j<n;j++) {
                    if(s[n-1-j][i] == '#') nexts[i][j] = '#';
                }
            }
            for(int i=0;i<n;i++) {
                for(int j=0;j<n;j++) {
                    s[i][j] = nexts[i][j];
                }
            }
            int minx=n, maxx=-1, miny=n, maxy=-1;
            for(int i=0;i<n;i++) {
                for(int j=0;j<n;j++) {
                    if(s[i][j] == '#') {
                        minx = min(minx, j);
                        maxx = max(maxx, j);
                        miny = min(miny, i);
                        maxy = max(maxy, i);
                    }
                }
            }
            bool flag = true;
            for(int i=0;i<=maxy-miny;i++) {
                for(int j=0;j<=maxx-minx;j++) {
                    if(s[miny+i][minx+j] != t[minty+i][mintx+j]) flag = false;
                }
            }
            if(flag) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}