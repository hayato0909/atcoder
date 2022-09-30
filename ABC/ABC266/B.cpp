#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n; cin >> n;
    ll m = 998244353;
    ll x;
    x = n % m;
    while(x < 0) x += m;
    cout << x << endl;
}