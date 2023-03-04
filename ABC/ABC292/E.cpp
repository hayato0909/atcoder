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
    vector<vector<int>> g(n), from(n);
    int u, v;
    rep(i, 0, m) {
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        from[v].push_back(u);
    }
    /*
    rep(i, 0, n) {
        sort(to[i].begin(), to[i].end());
        sort(from[i].begin(), from[i].end());
    }
    */

    ll ans = 0;
    vector<vector<int>> to(n);
    rep(i, 0, n) {
        queue<int> q;
        vector<bool> flag(n, false);
        flag[i] = true;
        q.push(i);
        while (!q.empty()) {
            int now = q.front();
            q.pop();
            for (int next: g[now]) {
                if (flag[next] == false) {
                    flag[next] = true;
                    to[i].push_back(next);
                    q.push(next);
                }
            }
        }
    }

    rep(i, 0, n) {
        ans += (to[i].size() - g[i].size());
    }
    cout << ans << endl;
}
