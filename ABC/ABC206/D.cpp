#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, string> P;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    dsu d(200001);
    rep(i, 0, n/2) d.merge(a[i], a[n-1-i]);

    int ans = 0;
    rep(i, 1, 200001) {
        if (d.leader(i) == i && d.size(i) > 1) ans += d.size(i) - 1;
    }
    cout << ans << endl;
}