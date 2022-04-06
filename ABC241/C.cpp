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
    int n;
    cin >> n;
    string s[n];
    for(int i=0;i<n;i++) cin >> s[i];

    for(int x=0;x<n;x++) {
        for(int y=0;y<n;y++) {
            if(x <= n-6) {
                int cnt = 0;
                for(int i=0;i<=5;i++) {
                    if(s[x+i][y] == '#') cnt++;
                }
                if(cnt >= 4) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }

            if(y <= n-6) {
                int cnt = 0;
                for(int i=0;i<=5;i++) {
                    if(s[x][y+i] == '#') cnt++;
                }
                if(cnt >= 4) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }

            if(x <= n-6 && y <= n-6) {
                int cnt = 0;
                for(int i=0;i<=5;i++) {
                    if(s[x+i][y+i] == '#') cnt++;
                }
                if(cnt >= 4) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }

            if(x >= 5 && y <= n-6) {
                int cnt = 0;
                for(int i=0;i<=5;i++) {
                    if(s[x-i][y+i] == '#') cnt++;
                }
                if(cnt >= 4) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
}