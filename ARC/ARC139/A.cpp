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

typedef long long ll;

int main() {
    int n; cin >> n;
    int t[n+1];
    for(int i=1;i<=n;i++) cin >> t[i];
    ll a[n+1];
    a[0] = 0;
    for(int i=1;i<=n;i++) {
        ll p = (1ll << t[i]);
        ll tmp1 = (a[i-1] / p + 1) * p;
        ll tmp2 = tmp1 + p;
        if(tmp1 % (p * 2) == 0) a[i] = tmp2;
        else a[i] = tmp1;
    }

    cout << a[n] << endl;
}