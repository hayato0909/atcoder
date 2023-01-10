#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;

int main() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];

    rep(i, 0, n) a[i] += i;
    rep(i, 0, n) b[i] += i;
    map<int, queue<int>> m;

    rep(i, 0, n) m[b[i]].push(i);
    atcoder::fenwick_tree<int> fw(n);
    ll ans = 0;

    rep(i, 0, n) {
        if (m[a[i]].empty()) {
            cout << -1 << endl;
            return 0;
        }
        int num = m[a[i]].front();
        m[a[i]].pop();
        a[i] = num;
    }

    for (int i=n-1;i>=0;i--) {
        ans += (ll)fw.sum(0, a[i]);
        fw.add(a[i], 1);
    }

    cout << ans << endl;
}