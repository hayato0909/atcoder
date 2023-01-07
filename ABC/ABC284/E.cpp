#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;

int n, m;
vector<vector<int>> v(200001);
vector<bool> check(200001, false);
int ans = 0;

void dfs(int now) {
    check[now] = true;

    ans++;
    for (int next:v[now]) {
        if (ans >= 1000000) {
            ans = 1000000;
            return;
        }
        if (!check[next]) {
            dfs(next);
            check[next] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    int u, uu;
    rep(i, 0, m) {
        cin >> u >> uu;
        v[u].push_back(uu);
        v[uu].push_back(u);
    }
    check[1] = true;

    dfs(1);
    cout << min(ans, 1000000) << endl;
}