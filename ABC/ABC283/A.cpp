#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;


int main() {
    ll a, b; cin >> a >> b;
    ll ans = 1;
    for(int i=0;i<b;i++) ans *= a;
    cout << ans << endl;
}