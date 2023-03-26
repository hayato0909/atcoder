#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

const ll INF = 1001001001001001;

int main() {
    string s; cin >> s;
    map<string, ll> m;
    string tmp = "0000000000";
    m[tmp]++;
    rep(i, 0, s.size()) {
        int num = s[i] - '0';
        if (tmp[num] == '0') {
            tmp[num] = '1';
        } else {
            tmp[num] = '0';
        }
        m[tmp]++;
    }
    ll ans = 0;
    for (ll i = 0; i < (1 << 10); i++) {
        string t = "0000000000";
        for (int bit = 0; bit < 10; bit++) {
            if (i & (1 << bit)) {
                t[bit] = '1';
            }
        }
        ans += (m[t] * (m[t] - 1)) / 2;
    }
    cout << ans << endl;
    // cout << m["0000000000"] << endl;
}

