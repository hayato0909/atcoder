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
    vector<int> a(n+1);
    rep(i, 1, n+1) cin >> a[i];
    ll ans = 0;
    ll same = 0;
    rep(i, 1, n+1) {
        if(i == a[i]) same++;
        else {
            if(i < a[i] && a[a[i]] == i) ans++;
        }
    }
    cout << ans + same * (same - 1) / 2 << endl;
}