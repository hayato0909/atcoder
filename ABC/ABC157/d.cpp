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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m), b(m), c(k), d(k);
    vector<vector<int>> fri(n), block(n);
    rep(i, 0, m) {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        fri[a[i]].push_back(b[i]);
        fri[b[i]].push_back(a[i]);
    }
    rep(i, 0, k) {
        cin >> c[i] >> d[i];
        c[i]--;
        d[i]--;
        block[c[i]].push_back(d[i]);
        block[d[i]].push_back(c[i]);
    }

    dsu ds(n);
    rep(i, 0, m) {
        ds.merge(a[i], b[i]);
    }

    rep(i, 0, n) {
        int ans = 0;
        int par = ds.leader(i);
        ans = ds.size(par) - 1;
        ans -= fri[i].size();
        for (int j: block[i]) {
            if (ds.same(i, j)) ans--;
        }
        cout << ans << " ";
    }
    cout << endl;
}
