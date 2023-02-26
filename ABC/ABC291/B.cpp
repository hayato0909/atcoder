#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n; cin >> n;
    vector<int> x(5*n);
    rep(i, 0, 5*n) cin >> x[i];
    sort(x.begin(), x.end());
    int sum = 0;
    rep(i, n, 4*n) sum += x[i];
    printf("%.6f\n", (double)sum / (double)n / 3.0);
}
