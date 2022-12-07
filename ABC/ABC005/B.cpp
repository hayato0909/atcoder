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
    vector<int> t(n);
    rep(i, 0, n) cin >> t[i];
    sort(t.begin(), t.end());
    cout << t[0] << endl;
}