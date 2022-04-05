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

const ll INF = 1000000000000000000;

ll f(ll a, ll b) {
    return a*a*a + a*a*b + a*b*b + b*b*b;
}

int main() {
    ll n;
    cin >> n;
    ll ans = INF;

    for(ll i = 0;i<=1000000;i++) {
        ll left = -1,right = 1000001;
        while(right - left > 1) {
            ll mid = (left + right) / 2;
            if(n <= f(i, mid)) right = mid;
            else left = mid;
        }
        ans = min(ans, f(i, right));
    }
    cout << ans << endl;
    return 0;
}