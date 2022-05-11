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
    string s[2];
    cin >> s[0];
    cin >> s[1];

    bool flag = true;
    
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            if(s[i][j] == '#') {
                if(s[(i+1)%2][j]=='.' && s[i][(j+1)%2]=='.') flag = false;
            }
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}