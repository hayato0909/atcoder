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
    map<string, int> m;
    int ans, score = 0;
    for(int i=1;i<=n;i++) {
        string s; cin >> s;
        int t; cin >> t;
        if(m[s] == 0) {
            m[s]++;
            if(score < t) {
                score = t;
                ans = i;
            }
        }
    }
    cout << ans << endl;
}