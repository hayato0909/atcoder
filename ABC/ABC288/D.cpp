#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, string> P;

int main() {
    int n, k; cin >> n >> k;
    vector<ll> a(n+1);
    rep(i, 1, n+1) cin >> a[i];

    int q; cin >> q;
    vector<int> l(q), r(q);
    rep(i, 0, q) cin >> l[i] >> r[i];
    vector<ll> p(n+1);
    rep(i, 1, k+1) p[i] = a[i];
    rep(i, k+1, n+1) p[i] = a[i] + p[i-k];

    rep(i, 0, q) {
        // r[i] - k + 1の場所
        ll ans;
        if (r[i]-k+1 >= l[i]+k) {
            int pos = r[i]-k+1;
            ans = p[r[i]-k+1];
            rep(j, 1, k+1) {
                if (l[i] - j >= 1 && (l[i] - j)%k == pos % k) ans -= p[l[i] - j];
            }
        } else ans = a[r[i]-k+1];
        bool flag = true;
        rep(j, r[i]-k+2, r[i]+1) {
            ll now;
            if (j >= l[i]+k) {
                now = p[j];
                rep(t, 1, k+1) {
                    if (l[i] - t >= 1 && (l[i] - t)%k == j % k) now -= p[l[i] - t];
                }
            } else now = a[j];
            if (ans != now) flag = false;
        }
        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}