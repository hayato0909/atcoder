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
    string s; cin >> s;
    int k; cin >> k;

    int left = 0, right = 0, cnt = 0, ans = 0;
    int x_num = 0;
    for(right=0;right<s.length();right++) {
        if(s[right] == 'X') {
            x_num++;
            ans = max(ans, x_num);
        } else {
            cnt++;
            if(cnt <= k) {
                x_num++;
                ans = max(ans, x_num);
            } else {
                while(s[left] == 'X') left++;
                left++;
                cnt--;
                x_num = right - left + 1;
                ans = max(ans, x_num);
            }
        }
    }
    cout << ans << endl;
}