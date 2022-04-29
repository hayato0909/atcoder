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
    string s;
    cin >> s;
    string ans = "YES";
    string t[4] = {"dream", "erase", "dreamer", "eraser"};
    for(int i=s.size()-1;i>=0;i--) {
        if(i>0 && s[i] == 'r' && s[i-1] == 'e') {
            i -= 2;
            if(i>=0 && s[i] == 'm') {
                for(int j=0;j<=4;j++) {
                    if(i-j>=0 && s[i-j] == t[2][4-j]) continue;
                    else ans = "NO";
                }
                i = i - 4;
            } else if(i>=0 && s[i] == 's') {
                for(int j=0;j<=3;j++) {
                    if(i-j>=0 && s[i-j] == t[3][3-j]) continue;
                    else ans = "NO";
                }
                i = i - 3;
            }
        } else if(s[i] == 'm') {
            for(int j=0;j<=4;j++) {
                if(i-j>=0 && s[i-j] == t[0][4-j]) continue;
                else ans = "NO";
            }
            i = i - 4;
        } else if(s[i] == 'e') {
            for(int j=0;j<=4;j++) {
                if(i-j>=0 && s[i-j] == t[1][4-j]) continue;
                else ans = "NO";
            }
            i = i - 4;
        }
    }
    cout << ans << endl;
}