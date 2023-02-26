#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n, m; cin >> n >> m;
    vector<int> x(m), y(m);
    rep(i, 0, m) {
        cin >> x[i] >> y[i];
        x[i]--;
        y[i]--;
    }
    vector<vector<int>> g(n);
    vector<int> num(n, 0);
    rep(i, 0, m) {
        g[x[i]].push_back(y[i]);
        num[y[i]]++;
    }

    queue<int> Q;
    vector<int> ans(n);
    int cnt = 1;
    rep(i, 0, n) if (num[i] == 0) Q.push(i);
    while (!Q.empty()) {
        if (Q.size() != 1) {
            cout << "No" << endl;
            return 0;
        }
        int now = Q.front();
        Q.pop();
        ans[now] = cnt++;
        for (auto next: g[now]) {
            if (--num[next] == 0) Q.push(next);
        }
    }
    cout << "Yes" << endl;
    rep(i, 0, n) cout << ans[i] << " ";
    cout << endl;
}