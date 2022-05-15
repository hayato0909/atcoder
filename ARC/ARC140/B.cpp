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
    int even = 0;
    int fin = 0;
    int ans = 0;
    vector<int> odd;
    for(int i=0;i<n-2;i++) {
        if(s[i] == 'A' && s[i+1] == 'R' && s[i+2] == 'C') {
            int cnt = 1;
            int left = i, right = i+2;
            while(1) {
                if(left-cnt < 0 || right+cnt >= n) break;
                if(s[left-cnt]=='A' && s[right+cnt]=='C') cnt++;
                else break;
            }
            if(cnt == 1) even++;
            else odd.push_back(cnt);
        }
    }
    sort(odd.begin(), odd.end());

    for(int i:odd) {
        if(i - 1 <= even) {
            even = even - (i - 1) + 1;
            ans += 2 * (i - 1);
            fin++;
        } else if(even != 0) {
            ans += even * 2;
            even = 0;
            break;
        } else {
            break;
        }
    }
    ans += (odd.size() - fin) * 2 + even;
    cout << ans << endl;
}