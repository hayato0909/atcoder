#include <bits/stdc++.h>
using namespace std;
#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;

int main() {
    int n; cin >> n;
    ll nine = 1;
    ll eight = 1;
    ll all = 1;
    rep(i, 0, n) {
        nine = (nine * 9) % mod;
        all = (all * 10) % mod;
        eight = (eight * 8) % mod;
    }
    ll ans = all - nine;
    while(ans < 0) ans += mod;
    ans = ans - nine + eight;
    while(ans < 0) ans += mod;
    cout << ans << endl;
}