#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;

long long power_mod(long long n, long long k, long long mod) {
    long long result = 1;
    // k を右シフトしつつ n を 2 乗していく
    while (k > 0) {
        // k の最下ビットが 1 なら、今の n を答えに掛ける
        if ((k & 1) == 1) result = (result * n) % mod;
        n = n * n % mod;
        k >>= 1;
    }
    return result;
}


int main() {
    ll n, m; cin >> n >> m;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];
    vector<vector<ll>> v(n, vector<ll>(n, 0));
    rep(i, 0, n) {
        rep(j, 0, n) {
            if(i == j) continue;
            v[i][j] = (power_mod(a[i], a[j], m) + power_mod(a[j], a[i], m)) % m;
        }
    }

    vector<ll> mincost(n, 0);
    vector<bool> used(n, false);

    mincost[0] = 0;
    ll res = 0;

    while(true) {
        int s = -1;
        for(int t=0;t<n;t++) {
            if(!used[t] && (s == -1 || mincost[t] > mincost[s])) s = t;
        }

        if(s == -1) break;
        used[s] = true;
        res += mincost[s];

        rep(i, 0, n) {
            mincost[i] = max(mincost[i], v[s][i]);
        }
    }
    cout << res << endl;
}