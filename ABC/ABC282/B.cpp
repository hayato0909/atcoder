#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;


int main() {
    int n, m; cin >> n >> m;
    vector<string> s(n);
    rep(i, 0, n) cin >> s[i];
    int ans = 0;
    rep(i, 0, n) {
        rep(j, i+1, n) {
            bool flag = true;
            rep(k, 0, m) {
                if(s[i][k] == 'x' && s[j][k] == 'x') flag = false;
            }
            if(flag) ans++;
        }
    }
    cout << ans << endl;
}