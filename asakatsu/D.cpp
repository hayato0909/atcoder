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

typedef pair<int, int> P;

int main() {
    int n; cin >> n;
    int v[n+1];
    for(int i=1;i<=n;i++) cin >> v[i];
    map<int, int> a,b;
    for(int i=1;i<=n;i++) {
        if(i%2 == 1) a[v[i]]++;
        else b[v[i]]++;
    }
    vector<P> c,d;
    for(map<int, int>::iterator i=a.begin();i!=a.end();i++) {
        c.push_back(P(i->second, i->first));
    }
    for(map<int, int>::iterator i=b.begin();i!=b.end();i++) {
        d.push_back(P(i->second, i->first));
    }
    sort(c.begin(), c.end());
    reverse(c.begin(), c.end());
    sort(d.begin(), d.end());
    reverse(d.begin(), d.end());

    int ans = 1000000;
    if(c[0].second != d[0].second) {
        ans = n - c[0].first - d[0].first;
    } else {
        if(c.size() > 1) {
            ans = n - c[1].first - d[0].first;
        }
        if(d.size() > 1) {
            ans = min(ans, n-c[0].first-d[1].first);
        }
        if(ans == 1000000) {
            ans = n - d[0].first;
        }
    }
    cout << ans << endl;
}