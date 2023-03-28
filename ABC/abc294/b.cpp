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
    int h, w; cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i, 0, h) rep(j, 0, w) cin >> a[i][j];

    rep(i, 0, h) {
        string s = "";
        rep(j, 0, w) {
            if (a[i][j] == 0)  s += ".";
            else s += ('A' + a[i][j] - 1);
        }
        cout << s << endl;
    }
}

