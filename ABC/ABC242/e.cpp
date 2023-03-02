#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 998244353;

int main() {
    int t; cin >> t;
    map<char, int> m;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int len = (n - 1) / 2;
        ll ans = 0;
        rep(i, 0, len+1) ans = (ans * 26ll + (s[i] - 'A')) % mod;
        ans = (ans + 1) % mod;
        string a = "", b = "";
        rep(i, 0, len+1-n%2) a += s[i];
        rep(i, len+1, n) b += s[i];
        reverse(a.begin(), a.end());
        if (a > b) ans = (ans - 1 + mod) % mod;
        // cout << a << endl << b << endl;
        cout << ans << endl;
    }
}