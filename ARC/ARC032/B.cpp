#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 1000000007;

int main() {
    int n, m; cin >> n >> m;
    atcoder::dsu d(n);
    vector<int> a(m), b(m);
    rep(i, 0, m) cin >> a[i] >> b[i];

    rep(i, 0, m) {
        d.merge(a[i]-1, b[i]-1);
    }
    cout << d.groups().size() - 1 << endl;
}
