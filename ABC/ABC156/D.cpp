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
const ll mod = 1000000007;
ll fact_inv[200001], inv[200001];

void init() {
    fact_inv[0] = fact_inv[1] = 1;
    inv[1] = 1;
    for(int i=2;i<=200000;i++) {
        inv[i] = mod - inv[mod%i] * (mod / i) % mod;
        fact_inv[i] = fact_inv[i-1] * inv[i] % mod;
    }
}

ll nCk(ll n, ll k) {
    ll ans = 1;
    for(ll i=n;i>=n-k+1;i--) {
        ans = (ans * i) % mod;
    }
    return ans * fact_inv[k] % mod;
}

ll modPow(ll a, ll n) {
  if (n == 1) return a % mod;
  if (n % 2 == 1) return (a * modPow(a, n - 1)) % mod;
  ll t = modPow(a, n / 2);
  return (t * t) % mod;
}

int main() {
    ll n,a,b; cin >> n >> a >> b;
    ll ans = modPow(2, n) - 1;
    init();
    ans -= nCk(n, a);
    if(ans < 0) ans += mod;
    ans -= nCk(n, b);
    if(ans < 0) ans += mod;
    cout << ans << endl;
}