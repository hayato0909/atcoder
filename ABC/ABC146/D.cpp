#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

vector<vector<int>> g;
map<P, int> ans;

void dfs(int e, int p, int c) {
    int k = 1;
    for (int next:g[e]) {
        if (next == p) continue;
        if (k == c) k++;
        ans[P(e, next)] = k;
        ans[P(next, e)] = k;
        k++;
        dfs(next, e, k-1);
    }
}

int main() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    rep(i, 0, n-1) cin >> a[i] >> b[i];
    g.resize(n);
    rep(i, 0, n-1) {
        g[a[i]-1].push_back(b[i]-1);
        g[b[i]-1].push_back(a[i]-1);
    }

    dfs(0, -1, -1);
    int k = 1;
    rep(i, 0, n) k = max(k, (int)g[i].size());
    cout << k << endl;
    rep(i, 0, n-1) {
        cout << ans[P(a[i]-1, b[i]-1)] << endl;
    }
}