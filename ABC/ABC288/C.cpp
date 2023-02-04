#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, string> P;

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i, 0, m) cin >> a[i] >> b[i];
    dsu d(n);

    int ans = 0;
    rep(i, 0, m) {
        if (d.same(a[i]-1, b[i]-1)) {
            ans++;
        } else {
            d.merge(a[i]-1, b[i]-1);
        }
    }
    cout << ans << endl;
}