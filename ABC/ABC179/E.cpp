#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    ll n, x, m;
    cin >> n >> x >> m;
    map<ll, int> M;
    int cnt = 1;
    M[x]++;
    ll a = x;
    int loop_start, loop_end;
    while (1) {
        cnt++;
        a = a * a % m;
        if (M[a] != 0) {
            loop_start = M[a];
            loop_end = cnt - 1;
            break;
        }
        M[a] = cnt;
    }
    ll sum = 0, loop_sum = 0;
    a = x;
    if (n <= loop_end) {
        ll ans = 0;
        rep(i, 0, n) {
            ans += a;
            a = a * a % m;
        }
        cout << ans << endl;
        return 0;
    }
    rep(i, 0, loop_end) {
        sum += a;
        if (i >= loop_start - 1) loop_sum += a;
        a = a * a % m;
    }
    ll ans = sum;
    n -= loop_end;
    ans += n / (loop_end - loop_start + 1) * loop_sum;
    ll res = n % (loop_end - loop_start + 1);
    cnt = 0;
    a = x;
    rep(i, 0, loop_end) {
        if (cnt == res) break;
        if (i >= loop_start - 1) {
            ans += a;
            cnt++;
        }
        a = a * a % m;
    }

    // cout << loop_start << " " << loop_end << " " << loop_sum << " " << res << endl;;
    cout << ans << endl;
}
