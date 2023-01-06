#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;

int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    int ans = 0;
    int cnt = 1;
    if (k == 1) ans++;
    rep(i, 1, n) {
        if (a[i-1] < a[i]) cnt++;
        else cnt = 1;
        if (cnt >= k) ans++;
    }
    cout << ans << endl;
}