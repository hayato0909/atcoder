#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n, m; cin >> n >> m;
    vector<ll> a(n), b(m);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, m) cin >> b[i];
    sort(a.begin(), a.end());
    vector<ll> odd(n), even(n);
    even[0] = a[1] - a[0];
    even[1] = even[0];
    rep(i, 2, n) {
        if (i == n - 1) continue;
        if (i % 2 == 0) even[i] = even[i-1] + a[i+1] - a[i];
        else even[i] = even[i-1];
    }
    odd[0] = 0;
    rep(i, 1, n) {
        if (i % 2 == 0) odd[i] = odd[i-1];
        else odd[i] = odd[i-1] + a[i+1] - a[i];
    }

    ll ans = 10000000000000000;
    rep(i, 0, m) {
        int idx = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        ll tmp;
        if (idx % 2 == 1) {
            if (idx > 1) tmp = even[idx-2];
            else tmp = 0ll;
            tmp += abs(b[i] - a[idx-1]);
            tmp += odd[n-1] - odd[idx-1];
        } else {
            if (idx > 0) tmp = even[idx-1];
            else tmp = 0;
            tmp += abs(b[i] - a[idx]);
            if (idx != n - 1) {
                tmp += odd[n-1] - odd[idx];
            }
        }
        // cout << tmp << endl;
        ans = min(tmp, ans);
    }
    cout << ans << endl;
}