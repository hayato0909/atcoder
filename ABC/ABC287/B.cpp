#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    int n, m; cin >> n >> m;
    vector<string> s(n), t(m);
    rep(i, 0, n) cin >> s[i];
    rep(i, 0, m) cin >> t[i];
    map<string, int> M;
    rep(i, 0, m) M[t[i]]++;
    int ans = 0;
    rep(i, 0, n) {
        string matsu = "";
        matsu += s[i][3];
        matsu += s[i][4];
        matsu += s[i][5];
        //cout << matsu << endl;
        if (M[matsu] > 0) ans++;
    }
    cout << ans << endl;
}