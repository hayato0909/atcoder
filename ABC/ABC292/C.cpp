#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 998244353;

const int INF = 1001001001;

int main() {
    ll n; cin >> n;
    vector<ll> num(n, 0);
    rep(i, 1, n) {
        int cnt = 1;
        int number = i;
        for (ll j = 2; j * j <= number; j++) {
            int c = 0;
            while (number % j == 0) {
                number /= j;
                c++;
            }
            cnt *= (c + 1);
        }
        if (number != 1) cnt *= 2;
        num[i] = cnt;
    }

    ll ans = 0;
    // rep(i, 1, 4) cout << num[i] << endl;
    rep(i, 1, n) ans += num[i] * num[n-i];
    cout << ans << endl;
}
