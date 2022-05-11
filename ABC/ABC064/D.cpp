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
    string s; cin >> s;
    string ans;

    int cnt = 0;
    for(int i=0;i<s.size();i++) {
        if(s[i] == '(') {
            ans += '(';
            cnt++;
        } else {
            if(cnt == 0) {
                ans = '(' + ans;
                ans += ')';
            } else {
                ans += ')';
                cnt--;
            }
        }
    }
    while(cnt > 0) {
        ans += ')';
        cnt--;
    }
    cout << ans << endl;
}