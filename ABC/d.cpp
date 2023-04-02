#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

const int INF = 100100100;
const ll LINF = 100100100100100100;

int main() {
    ll n, m; cin >> n >> m;
    ll ans = LINF;
    for (ll a = 1; a <= n; a++) {
        ll b = ( m + a - 1 ) / a;
        if (b <= n) ans = min(ans, a*b);
        if (a > b) break;
    }
    if (ans == LINF) ans = -1;
    cout << ans << endl;
}

