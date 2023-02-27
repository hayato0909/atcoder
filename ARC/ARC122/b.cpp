#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];
    sort(a.begin(), a.end());
    vector<ll> sum(n);
    sum[0] = a[0];
    rep(i, 1, n) sum[i] = sum[i-1] + a[i];
    double ans = 10000000000000000;
    rep(i, 0, n) {
        // x = a_i / 2 とする
        // 0 <= j <= i: min(a_j, 2x) = a_j
        // i < j < n: min(a_j, 2x) = 2x = a_i
        ll tmp = sum[i] + a[i] * (n - 1 - i);
        double tmp2 = (double)a[i] * (double)n / 2 - (double)tmp + (double)sum[n-1];
        ans = min(ans, tmp2);
    }
    printf("%.7f\n", ans / (double)n);
}