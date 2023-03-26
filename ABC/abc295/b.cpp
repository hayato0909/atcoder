#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

const ll INF = 1001001001001001;

int main() {
    int r, c; cin >> r >> c;
    vector<string> b(r);
    rep(i, 0, r) cin >> b[i];

    rep(i, 0, r) rep(j, 0, c) {
        if ('0' <= b[i][j] && b[i][j] <= '9') {
            int num = b[i][j] - '0';
            rep(x, 0, r) rep(y, 0, c) {
                if (x < 0 || x >= r || y < 0 || y >= c) continue;
                if ((abs(i-x) + abs(j-y) <= num) && b[x][y] == '#') b[x][y] = '.';
            }
        }
    }

    rep(i, 0, r) {
        rep(j, 0, c) {
            if (b[i][j] == '#') cout << "#";
            else cout << ".";
        }
        cout << endl;
    }
}

