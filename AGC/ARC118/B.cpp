#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

int main() {
    ll k, n, m; cin >> k >> n >> m;
    vector<ll> a(k);
    rep(i, 0, k) cin >> a[i];
    rep(i, 0, k) a[i] *= m;
    vector<ll> num(k);
    vector<P> diff(k);

    rep(i, 0, k) {
        num[i] = a[i] / n;
        diff[i] = P(n*(num[i]+1)+n*num[i]-2*a[i], i);
    }
    ll sum = 0;
    rep(i, 0, k) sum += num[i];

    sort(diff.begin(), diff.end());
    rep(i, 0, n) {
        if (sum == m) break;
        num[diff[i].second]++;
        sum++;
    }

    rep(i, 0, k) cout << num[i] << " ";
    cout << endl;
}