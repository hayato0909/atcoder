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

const int INF = 1000000;
typedef pair<int, int> p;

int main() {
    int n,k;
    cin >> n >> k;
    int a[n+1];
    map<int, vector<int> > idx;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }

    vector<int> back, tmp;
    for(int i=k+1;i<=n;i++) back.push_back(a[i]);
    sort(back.begin(), back.end());
    for(int i=k+1;i<=n;i++) {
        int pos = lower_bound(tmp.begin(), tmp.end(), a[i]) - tmp.begin();
        if(pos < tmp.size()) {
            idx[a[i]].push_back(idx[tmp[pos]][0]);
        } else {
            idx[a[i]].push_back(i);
            tmp.push_back(a[i]);
        }
    }

    int ans = INF;

    for(int i=1;i<=k;i++) {
        int pos = upper_bound(back.begin(), back.end(), a[i]) - back.begin();
        if(pos < n - k) {
            ans = min(ans, idx[back[pos]][0]-i);
        }
    }
    if(ans == INF) cout << "-1" << endl;
    else cout << ans << endl;
}