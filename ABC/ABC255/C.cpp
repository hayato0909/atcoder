#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll x,a,d,n;
    cin >> x >> a >> d >> n;
    ll ans;
    if(d < 0) {
        a = a + (n-1)*d;
        d = -d;
    }
    if(x <= a) ans = a - x;
    else if(x >= a + (n - 1)*d) ans = x - a - (n-1)*d;
    else {
        ll tmp = 100000000000000;
        ll l = (x-a)/d+1, r = (x-a)/d + 2;
        for(ll i=l;i<=r;i++) {
            tmp = min(tmp, abs(a+d*(i-1) - x));
        }
        ans = tmp;
    }
    cout << ans << endl;
}