#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;


int main(){
    int n; cin >> n;
    vector<P> v(100001, P(-1, -1));
    int t, x, a;
    rep(i, 0, n) {
        cin >> t >> x >> a;
        v[t] = P(x, a);
    }
    ll dp[100001][5];
    rep(i, 0, 100001) {
        rep(j, 0, 5) dp[i][j] = -1;
    }
    dp[0][0] = 0;
    rep(i, 1, 5) dp[0][i] = -100000000;
    rep(i, 1, 100001) {
        if(v[i].first == -1) {
            dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
            rep(j, 1, 4) {
                dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]);
                dp[i][j] = max(dp[i][j], dp[i-1][j+1]);
            }
            dp[i][4] = max(dp[i-1][4], dp[i-1][3]);
        } else {
            dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
            rep(j, 1, 4) {
                dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]);
                dp[i][j] = max(dp[i][j], dp[i-1][j+1]);
            }
            dp[i][4] = max(dp[i-1][4], dp[i-1][3]);
            if(dp[i][v[i].first] != -100000000) dp[i][v[i].first] += (ll)v[i].second;
        }
    }
    ll ans = 0;
    rep(i, 0, 5) ans = max(ans, dp[100000][i]);
    cout << ans << endl;
}
