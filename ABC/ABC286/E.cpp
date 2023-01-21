#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    int n; cin >> n;
    vector<ll> a(n+1);
    rep(i, 1, n+1) cin >> a[i];
    vector<string> s(n+1);
    rep(i, 1, n+1) cin >> s[i];
    int q; cin >> q;
    vector<int> u(q), v(q);
    rep(i, 0, q) cin >> u[i] >> v[i];
    vector<vector<P>> dp(n+1, vector<P>(n+1, P(-1, 0ll)));

    rep(start, 1, n+1) {
        queue<int> Q;
        Q.push(start);
        dp[start][start] = P(0, a[start]);
        while(!Q.empty()) {
            int now = Q.front();
            Q.pop();
            int cnt = dp[start][now].first;
            ll money = dp[start][now].second;
            for(int i=1;i<=n;i++) {
                if (s[now][i-1] == 'Y') {
                    if (dp[start][i].first == -1) {
                        Q.push(i);
                        dp[start][i] = P(cnt+1, money+a[i]);
                    } else if (dp[start][i].first == cnt+1) {
                        if (dp[start][i].second < money+a[i])
                            dp[start][i] = P(cnt+1, money+a[i]);
                    }
                }
            }
        }
    }

    rep(i, 0, q) {
        if (dp[u[i]][v[i]].first == -1) cout << "Impossible" << endl;
        else cout << dp[u[i]][v[i]].first << " " << dp[u[i]][v[i]].second << endl;
    }
}