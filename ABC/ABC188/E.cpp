#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    vector<vector<int>> v(n);
    int x, y;
    rep(i, 0, m) {
        cin >> x >> y;
        v[x-1].push_back(y-1);
    }

    vector<int> ma(n);
    for (int i=n-1;i>=0;i--) {
        if (v[i].size() == 0) {
            ma[i] = a[i];
            continue;
        }

        for (int next:v[i]) {
            ma[i] = max(ma[i], ma[next]);
            ma[i] = max(ma[i], a[next]);
        }
    }

    int ans = -2000000000;
    rep(i, 0, n) {
        if (v[i].size() != 0) {
            ans = max(ans, ma[i]-a[i]);
        }
    }
    cout << ans << endl;
}
