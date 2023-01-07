#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;

int main() {
    int t; cin >> t;
    rep(i, 0, t) {
        int n; cin >> n;
        int a;
        int ans = 0;
        rep(j, 0, n) {
            cin >> a;
            if (a % 2 == 1) ans++;
        }
        cout << ans << endl;
    }
}