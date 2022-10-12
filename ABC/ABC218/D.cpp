#include <bits/stdc++.h>
using namespace std;
#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n; cin >> n;
    vector<P> p(n);
    rep(i, 0, n) cin >> p[i].first >> p[i].second;
    sort(p.begin(), p.end());

    int ans = 0;
    rep(i, 0, n-1) {
        rep(j, i+1, n) {
            //(x[i], y[j]) (x[j], y[i]) が存在すれば良い
            int x = p[i].first, y = p[i].second;
            int xx = p[j].first, yy = p[j].second;
            if(x == xx || y == yy) continue;

            int idx = lower_bound(p.begin(), p.end(), P(x, yy)) - p.begin();
            if(!(idx < n && p[idx] == P(x, yy))) continue;
            idx = lower_bound(p.begin(), p.end(), P(xx, y)) - p.begin();
            if(idx < n && p[idx] == P(xx, y)) ans++;
        }
    }
    cout << ans / 2 << endl;
}