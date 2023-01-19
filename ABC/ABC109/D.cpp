#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    int h, w; cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i, 0, h) rep(j, 0, w) cin >> a[i][j];

    vector<int> x, y, xx, yy;

    rep(i, 0, h) rep(j, 0, w-1) {
        if (a[i][j] % 2 == 1) {
            x.push_back(i);
            y.push_back(j);
            xx.push_back(i);
            yy.push_back(j+1);
            a[i][j]--;
            a[i][j+1]++;
        }
    }

    rep(i, 0, h-1) {
        if (a[i][w-1] % 2 == 1) {
            x.push_back(i);
            y.push_back(w-1);
            xx.push_back(i+1);
            yy.push_back(w-1);
            a[i][w-1]--;
            a[i+1][w-1]++;
        }
    }

    cout << x.size() << endl;
    rep(i, 0, x.size()) {
        cout << x[i] + 1 << " " << y[i] + 1 << " " << xx[i] + 1 << " " << yy[i] + 1 << endl;
    }
}