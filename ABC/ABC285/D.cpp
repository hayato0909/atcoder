#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    int n; cin >> n;
    vector<string> s(n), t(n);
    rep(i, 0, n) cin >> s[i] >> t[i];
    vector<bool> check(n, false);

    map<string, int> ms, mt;
    rep(i, 0, n) {
        ms[s[i]] = i + 1;
        mt[t[i]] = i + 1;
    }

    atcoder::dsu d(n+1);
    rep(i, 0, n) { 
        if (ms[t[i]] == 0) continue; 
        int idx = ms[t[i]];
        if (d.same(i+1, idx)) {
            cout << "No" << endl;
            return 0;
        }
        d.merge(i+1, idx);
    }
    cout << "Yes" << endl;
}