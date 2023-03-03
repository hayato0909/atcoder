#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 998244353;

const int INF = 1001001001;

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, m) cin >> b[i];
    auto dp = vector(n+1, vector(m+1, INF));
    dp[0][0] = 0;
    rep(i, 0, n+1) rep(j, 0, m+1) {
        if (i < n) dp[i+1][j] = min(dp[i+1][j], dp[i][j]+1);
        if (j < m) dp[i][j+1] = min(dp[i][j+1], dp[i][j]+1);
        if (i < n && j < m) {
            if (a[i] != b[j]) dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]+1);
            else dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]);
        }
    }
    cout << dp[n][m] << endl;
}
