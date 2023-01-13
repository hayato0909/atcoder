#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

using mint = modint1000000007;
const ll mod = 1000000007;

vector<ll> fact(2001), inv(2001), finv(2001);

ll COM(int n, int k) {
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fact[n] * (finv[n-k] * finv[k] % mod) % mod;
}

void COMinit() {
    fact[0] = fact[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    rep(i, 2, 2001) {
        fact[i] = fact[i-1] * i % mod;
        inv[i] = mod - inv[mod%i] * (mod / i) % mod;
        finv[i] = finv[i-1] * inv[i] % mod;
    }
}

int main() {
    int n, k; cin >> n >> k;
    COMinit();

    rep(i, 1, k+1) {
        ll ans = COM(n-k+1, i) * COM(k-1, i-1) % mod;
        cout << ans << endl;
    }
}
