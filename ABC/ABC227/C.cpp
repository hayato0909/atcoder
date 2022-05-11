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
    ll n;
    cin >> n;

    ll ans = 0;
    for(ll i=1;i*i*i<=n;i++) {
        for(ll j=i;i*j*j<=n;j++) {
            ll c = n / i / j;
            ans += c - j + 1;
        }
    }
    cout << ans << endl;
}