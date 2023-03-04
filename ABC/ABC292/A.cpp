#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 998244353;

const int INF = 1001001001;

int main() {
    string s; cin >> s;
    string ans = "";
    string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    rep(i, 0, s.size()) {
        ans += alp[s[i] - 'a'];
    }
    cout << ans << endl;
}
