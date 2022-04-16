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
    map<int, vector<int> > a;
    for(int i=1;i<=n;i++) {
        int tmp; cin >> tmp;
        a[tmp].push_back(i);
    }
    int q; cin >> q;
    int l[q], r[q], x[q];
    for(int i=0;i<q;i++) cin >> l[i] >> r[i] >> x[i];

    for(int i=0;i<q;i++) {
        int tmp1 = lower_bound(a[x[i]].begin(), a[x[i]].end(), l[i]) - a[x[i]].begin();
        int tmp2 = upper_bound(a[x[i]].begin(), a[x[i]].end(), r[i]) - a[x[i]].begin();
        cout << tmp2 - tmp1 << endl;
    }
}