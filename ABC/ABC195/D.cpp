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
    int n,m,q; cin >> n >> m >> q;
    int w[n+1], v[n+1];
    vector<P> a;
    for(int i=1;i<=n;i++) {
        cin >> w[i] >> v[i];
        a.push_back(P(v[i], w[i]));
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    int x[m+1];
    for(int i=1;i<=m;i++) cin >> x[i];
    int l[q], r[q];
    for(int i=0;i<q;i++) cin >> l[i] >> r[i];

    for(int i=0;i<q;i++) {
        vector<int> b;
        for(int j=1;j<l[i];j++) b.push_back(x[j]);
        for(int j=r[i]+1;j<=m;j++) b.push_back(x[j]);
        sort(b.begin(), b.end());
        int ans = 0;
        for(int j=0;j<n;j++) {
            int idx = lower_bound(b.begin(), b.end(), a[j].second) - b.begin();
            if(idx < b.size()) {
                ans += a[j].first;
                b.erase(b.begin()+idx);
            }
            if(b.size() == 0) break;
        }
        cout << ans << endl;
    }
}