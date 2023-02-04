#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, string> P;

int main() {
    int n, k; cin >> n >> k;
    vector<string> s(n), ans;
    rep(i, 0, n) cin >> s[i];

    rep(i, 0, k) ans.push_back(s[i]);
    sort(ans.begin(), ans.end());
    rep(i, 0, k) cout << ans[i] << endl;
}