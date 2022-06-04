#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n; cin >> n;
    ll ans = 0;

    for(ll i=1;i<=n;i++) {
        ll a = i;
        for(ll j=2;j*j<=a;j++) {
            while(a%(j*j) == 0) a /= j*j;
        }
        for(ll j=1;a*j*j<=n;j++) ans++;
    }
    cout << ans << endl;
}