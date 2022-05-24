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

const int INF = 2000000000;

int main() {
    int n; cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    int q; cin >> q;
    int b[q+1];
    for(int i=1;i<=q;i++) cin >> b[i];
    sort(a+1, a+n+1);

    for(int i=1;i<=q;i++) {
        int tmp1 = INF, tmp2 = INF;
        int idx = lower_bound(a+1, a+n+1, b[i]) - a;
        if(idx <= n) tmp1 = abs(a[idx] - b[i]);
        if(1 <= idx - 1) tmp2 = abs(a[idx - 1] - b[i]);
        cout << min(tmp1, tmp2) << endl;
    }

    return 0;
}