#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;

int main() {
    int n; cin >> n;
    vector<string> s(n);
    rep(i, 0, n) cin >> s[i];
    for(int i=n-1;i>=0;i--) cout << s[i] << endl;
}