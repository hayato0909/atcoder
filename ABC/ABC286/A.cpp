#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    vector<int> a(n+1);
    rep(i, 1, n+1) cin >> a[i];
    rep(i, 1, p) cout << a[i] << " ";
    rep(i, r, s+1) cout << a[i] << " ";
    rep(i, q+1, r) cout << a[i] << " ";
    rep(i, p, q+1) cout << a[i] << " ";
    rep(i, s+1, n+1) cout << a[i] << " ";
    cout << endl;
}