#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, ll> P;

const ll mod = 998244353;

int main() {
    int n; cin >> n;
    vector<ll> t(n);
    rep(i, 0, n) cin >> t[i];
    if(n == 1) {
        cout << t[0] << endl;
        return 0;
    }
    ll ans = t[0] / gcd(t[0], t[1]) * t[1];
    rep(i, 2, n) {
        ans = ans / gcd(ans, t[i]) * t[i];
    }
    cout << ans << endl;
}