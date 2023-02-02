#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    int n, k; cin >> n >> k;
    vector<int> r(n);
    rep(i, 0, n) cin >> r[i];

    sort(r.begin(), r.end());
    double rate = 0.0;
    vector<int> ans;
    rep(i, 0, k) ans.push_back(r[n-1-i]);
    reverse(ans.begin(), ans.end());

    rep(i, 0, k) {
        rate = (rate + (double)ans[i]) / 2.0;
    }
    printf("%.8f\n", rate);
}