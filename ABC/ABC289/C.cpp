#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

int main() {
    int n, m; cin >> n >> m;
    vector<int> c(m);
    vector<vector<int>> a(m);
    rep(i, 0, m) {
        cin >> c[i];
        a[i].resize(c[i]);
        rep(j, 0, c[i]) cin >> a[i][j];
    }
    ll ans = 0;

    for (int bit = 0; bit < (1 << m); bit++) {
        vector<int> tmp(n, 0);
        for (int i=0;i<m;i++) {
            if (bit & (1 << i)) {
                for (int j: a[i]) tmp[j-1]++;
            }
        }
        bool flag = true;
        rep(i, 0, n) if (tmp[i] == 0) flag = false;
        if (flag) ans++;
    }
    cout << ans << endl;
}