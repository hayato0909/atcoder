#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> v(n+1);
    int u, uu;
    rep(i, 0, m) {
        cin >> u >> uu;
        v[u].push_back(uu);
        v[uu].push_back(u);
    }
    vector<int> check(n+1, -1);
    int ans = 0;
    rep(i, 1, n+1) {
        if (check[i] != -1) continue;
        queue<int> q;
        q.push(i);
        check[i] = 0;
        ans++;
        while(!q.empty()) {
            int now = q.front(); q.pop();
            for(int next:v[now]) {
                if(check[next] == -1) {
                    check[next] = 0;
                    q.push(next);
                }
            }
        }
    }
    cout << ans << endl;
}