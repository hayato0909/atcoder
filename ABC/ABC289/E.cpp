#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int t; cin >> t;
    rep(i, 0, t) {
        int n, m; cin >> n >> m;
        vector<int> c(n);
        rep(j, 0, n) cin >> c[j];
        vector<vector<int>> ga(n), gb(n);
        int u, v;
        rep(j, 0, m) {
            cin >> u >> v;
            if (c[u-1] == c[v-1]) {
                ga[u-1].push_back(v-1);
                ga[v-1].push_back(u-1);
            } else {
                gb[u-1].push_back(v-1);
                gb[v-1].push_back(u-1);
            }
        }
        if (c[0] == c[n-1]) {
            cout << "-1" << endl;
            continue;
        }

        vector<int> used(n*n, -1);
        used[n*(n-1)] = 0;
        queue<int> Q;
        Q.push(n*(n-1));
        while (!Q.empty()) {
            int pos = Q.front();
            int posa = pos % n, posb = pos / n;
            Q.pop();
            if (ga[posa].size() != 0 && ga[posb].size() != 0) {
                for (int na: ga[posa]) {
                    for (int nb: ga[posb]) {
                        if (used[na + n*nb] == -1) {
                            Q.push(na + n*nb);
                            used[na + n*nb] = used[posa + n*posb] + 1;
                        }
                    }
                }
            }

            if (gb[posa].size() != 0 && gb[posb].size() != 0) {
                for (int na: gb[posa]) {
                    for (int nb: gb[posb]) {
                        if (used[na + n*nb] == -1) {
                            Q.push(na + n*nb);
                            used[na + n*nb] = used[posa + n*posb] + 1;
                        }
                    }
                }
            }
        }
        cout << used[n-1] << endl;
    }
}