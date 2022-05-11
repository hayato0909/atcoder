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
#define MAX 3000000

typedef long long ll;
const ll mod = 1000000007;
ll fact[MAX], inv_fact[MAX], inv[MAX];

void init() {
    fact[0] = 1;
    fact[1] = 1;
    inv[0] = 1;
    inv[1] = 1;
    inv_fact[0] = 1;
    inv_fact[1] = 1;
    for(ll i=2;i<MAX;i++) {
        fact[i] = fact[i - 1] * i % mod;
        inv[i] = mod - inv[mod%i] * (mod / i) % mod;
        inv_fact[i] = inv_fact[i - 1] * inv[i] % mod;
    }
}

ll nCk(ll n, ll k) {
    ll x = fact[n];
    ll y = inv_fact[n-k];
    ll z = inv_fact[k];
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return x * ((y * z) % mod) % mod;
}

int main() {
    ll x, y; cin >> x >> y;
    if((x+y)%3==0) {
        ll a = (2*y-x)/3, b = (2*x-y)/3;
        init();
        cout << nCk(a+b, a) << endl;
    } else {
        cout << "0" << endl;
    }
}