#include <bits/stdc++.h>
#include <atcoder/modint>

using namespace std;
using mint = atcoder::modint998244353;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, ll> P;

int main() {
    int n, p; cin >> n >> p;
    vector dp(n, mint(0));
    mint critical = mint(p) / 100, normal = 1 - critical;
    dp[0] = mint(1);
    rep(i, 1, n) dp[i] = (dp[i-2] * critical + dp[i-1] * normal) + 1;
    cout << dp.back().val() << endl;
}