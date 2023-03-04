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
    vector<vector<int>> g(n);
    vector<int> u(m), v(m);
    rep(i, 0, m) {
        cin >> u[i] >> v[i];
        u[i]--;
        v[i]--;
        g[u[i]].push_back(v[i]);
        g[v[i]].push_back(u[i]);
    }
    dsu d(n);
    rep(i, 0, m) d.merge(u[i], v[i]);
    vector<int> num(n, 0);
    rep(i, 0, m) {
        num[d.leader(u[i])]++;
    }
    rep(i, 0, n) {
        int lead = d.leader(i);
        if (num[lead] != d.size(i)) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
