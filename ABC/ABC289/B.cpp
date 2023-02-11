#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(m);
    rep(i, 0, m) cin >> a[i];
    vector<vector<int>> v(n);
    rep(i, 0, m) {
        v[a[i]-1].push_back(a[i]);
    }
    vector<int> ans;
    rep(i, 0, n) {
        if (v[i].size() == 0) ans.push_back(i);
        else {
            int l = i, r = i;
            while (v[r].size() != 0) r++;
            for (int j=r;j>=l;j--) ans.push_back(j);
            i = r;
        }
    }
    rep(i, 0, n) cout << ans[i] + 1 << " ";
    cout << endl;
}