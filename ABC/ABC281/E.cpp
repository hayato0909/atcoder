#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

int main() {
    int n, m, k; cin >> n >> m >> k;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];
    vector<ll> tmp;
    rep(i, 0, m) tmp.push_back(a[i]);
    sort(tmp.begin(), tmp.end());
    multiset<ll> l, r;
    ll ans = 0;
    rep(i, 0, k) {
        l.insert(tmp[i]);
        ans += tmp[i];
    }
    rep(i, k, m) r.insert(tmp[i]);
    cout << ans << " ";

    rep(i, m, n) {
        auto iter = l.find(a[i-m]);
        if(iter != l.end()) {
            l.erase(l.find(a[i-m]));
            ans -= a[i-m];
        } else {
            r.erase(r.find(a[i-m]));
        }

        auto itr = l.end();
        itr--;
        if(a[i] < *itr) {
            l.insert(a[i]);
            ans += a[i];
        } else r.insert(a[i]);

        if(l.size() == k - 1) {
            auto next = r.begin();
            ans += *next;
            l.insert(*next);
            r.erase(next);
        } else if(l.size() == k + 1) {
            auto next = l.end();
            next--;
            ans -= *next;
            r.insert(*next);
            l.erase(next);
        }
        cout << ans << " ";
    }
    cout << endl;
}