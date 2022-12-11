#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;

int main() {
    int n, m, k; cin >> n >> m >> k;
    vector<ll> a(m), b(m), c(m);
    rep(i, 0, m) cin >> a[i] >> b[i] >> c[i];
    vector<ll> e(k);
    rep(i, 0, k) cin >> e[i];

    vector<ll> dp(n+1, -1);
    dp[1] = 0;
    rep(i, 0, k) {
        ll now = e[i] - 1;
        int start = a[now], fin = b[now];
        if(dp[start] == -1ll) continue;
        if(dp[fin] == -1ll) dp[fin] = dp[start] + c[now];
        else dp[fin] = min(dp[fin], dp[start] + c[now]);
    }
    cout << dp[n] << endl;
}