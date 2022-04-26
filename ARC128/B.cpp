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

const int INF = 1000000000;

int main() {
    int t; cin >> t;
    int r[t], g[t], b[t];
    for(int i=0;i<t;i++) cin >> r[i] >> g[i] >> b[i];

    int ans[t];
    for(int i=0;i<t;i++) {
        vector<int> n;
        n.push_back(r[i]);
        n.push_back(g[i]);
        n.push_back(b[i]);
        sort(n.begin(), n.end());
        if(n[0] == n[1]) ans[i] = n[0];
        else if(n[1] == n[2]) ans[i] = n[2];
        else {
            ans[i] = INF;
            int tmp1[3] = {0, 0, 1}, tmp2[3] = {1, 2, 2};
            for(int j=0;j<3;j++) {
                if((n[tmp2[j]]-n[tmp1[j]])%3 == 0) {
                    ans[i] = min(ans[i], n[tmp2[j]]);
                }
            }
            if(ans[i] == INF) ans[i] = -1;
        }
    }

    for(int i=0;i<t;i++) cout << ans[i] << endl;
}