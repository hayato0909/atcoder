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
    int n, m; cin >> n >> m;
    ll x[n], y[n], z[n];
    for(int i=0;i<n;i++) {
        cin >> x[i] >> y[i] >> z[i];
    }
    ll ans = 0;
    for(int bit=0;bit<(1<<3);bit++) {
        vector<ll> a;
        for(int i=0;i<n;i++) {
            ll tmp = 0;
            if(bit&1) tmp += x[i];
            else tmp -= x[i];
            if(bit&(1<<1)) tmp += y[i];
            else tmp -= y[i];
            if(bit&(1<<2)) tmp += z[i];
            else tmp -= z[i];
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        ll M = 0;
        for(int i=0;i<m;i++) M += a[i];
        ans = max(ans, M);
    }

    cout << ans << endl;
}