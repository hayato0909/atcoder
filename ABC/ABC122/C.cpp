#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, ll> P;

const ll mod = 998244353;

int main() {
    int n, q; cin >> n >> q;
    string s; cin >> s;
    vector<int> dp(n+1, 0);
    rep(i, 1, n) {
        if(s[i-1] == 'A' && s[i] == 'C') dp[i+1] = dp[i] + 1;
        else dp[i+1] = dp[i];
    }
    int l, r;
    rep(i, 0, q) {
        cin >> l >> r;
        cout << dp[r] - dp[l] << endl; 
    }
}