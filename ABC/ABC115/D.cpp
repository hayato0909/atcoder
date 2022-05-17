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
ll num[51];
ll p[51];

ll eat(ll n, ll x) {
    if(n == 0) {
        if(x <= 0) return 0;
        else return 1;
    } else if(x <= 1 + num[n-1]) {
        return eat(n-1, x-1);
    } else {
        return p[n-1] + 1 + eat(n-1, x-2-num[n-1]);
    }
}

int main() {
    ll n, x; cin >> n >> x;
    num[0] = 1;
    p[0] = 1;
    for(int i=1;i<=n;i++) {
        num[i] = 3 + num[i-1]*2;
        p[i] = 2*p[i-1] + 1;
    }
    cout << eat(n, x) << endl;
}