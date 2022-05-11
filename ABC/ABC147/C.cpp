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

typedef pair<int, bool> P;

int main() {
    int n; cin >> n;
    map<int, vector<P> > s;
    for(int i=1;i<=n;i++) {
        int a; cin >> a;
        int x, y;
        for(int j=0;j<a;j++) {
            cin >> x >> y;
            s[i].push_back(P(x, y));
        }
    }

    int ans = 0, cnt;
    bool a[n+1];
    for(int bit=0;bit<(1<<n);bit++) {
        cnt = 0;
        for(int i=0;i<n;i++) {
            if(bit & (1<<i)) {
                a[i+1] = true;
                cnt++;
            } else a[i+1] = false;
        }
        bool flag = true;
        for(int i=1;i<=n;i++) {
            if(a[i]) {
                for(P to:s[i]) {
                    if(a[to.first]!=to.second) flag = false;
                }
                if(!flag) break;
            }
        }
        if(flag) ans = max(ans, cnt);
    }
    cout << ans << endl;
}