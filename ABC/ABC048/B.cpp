#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll a, b, x;
    cin >> a >> b >> x;
    ll r, l;
    ll ans = b/x - a/x;
    if(a % x == 0) ans++;
    cout << ans << endl;
}