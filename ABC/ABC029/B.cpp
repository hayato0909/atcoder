#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

int main() {
    int ans = 0;
    vector<string> s(12);
    rep(i, 0, 12) cin >> s[i];
    rep(i, 0, 12) {
        rep(j, 0, s[i].size()) {
            if(s[i][j] == 'r') {
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
}