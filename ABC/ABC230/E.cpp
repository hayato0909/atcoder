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
    ll n; cin >> n;
    ll k;
    for(k=1;k<=n;k++) {
        if(k*k > n) break;
    }
    k--;

    ll ans = 0;
    for(ll i=1;i<=k;i++) {
        ans += (n/i - n/(i+1))*i;
    }
    for(ll i=1;i<=n/(k+1);i++) {
        ans += n/i;
    }
    cout << ans << endl;
}