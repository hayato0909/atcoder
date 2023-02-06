#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, string> P;

int main() {
    int n, x, y; cin >> n >> x >> y;

    vector<int> ans(n);
    rep(i, 0, n) {
        rep(j, i+1, n) {
            int len = min(j-i, abs(x-1-i)+1+abs(y-1-j));
            ans[len]++;
        }
    }

    rep(i, 1, n) cout << ans[i] << endl;
}