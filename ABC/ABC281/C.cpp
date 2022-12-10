#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

int main() {
    ll n, t; cin >> n >> t;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];
    ll sum = 0;
    rep(i, 0, n) sum += a[i];

    t = t % sum;
    rep(i, 0, n) {
        if(t < a[i]) {
            cout << i + 1 << " " << t << endl;
            break;
        } else {
            t -= a[i];
        }
    }
}