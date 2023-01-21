#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    int n, x; cin >> n >> x;
    vector<int> a(n+1), b(n+1);
    rep(i, 1, n+1) cin >> a[i] >> b[i];
    vector<vector<bool>> dp(n+1, vector<bool>(x+1, false));
    dp[0][0] = true;

    rep(i, 1, n+1) {
        rep(j, 0, x+1) {
            if (dp[i-1][j]) {
                int tmp = 0;
                dp[i][j] = true;
                rep(k, 0, b[i]) {
                    tmp += a[i];
                    if(j + tmp > x) break;
                    dp[i][j+tmp] = true;
                }
            }
        } 
    }
    if (dp[n][x]) cout << "Yes" << endl;
    else cout << "No" << endl;
}