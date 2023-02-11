#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    int m; cin >> m;
    vector<int> b(m);
    rep(i, 0, m) cin >> b[i];
    int x; cin >> x;
    vector<int> dp(x+1, 0);
    rep(i, 0, m) dp[b[i]] = -1;
    dp[0] = 1;
    rep(i, 0, x) {
        if (dp[i] != 1) continue;
        for (int step: a) {
            if (i + step <= x && dp[i + step] != -1) dp[i+step] = 1;
        }
    } 
    if (dp[x] == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}