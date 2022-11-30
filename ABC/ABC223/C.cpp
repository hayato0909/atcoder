#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 998244353;

int main() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    rep(i, 0, n) cin >> a[i] >> b[i];
    double sum = 0.0;
    rep(i, 0, n) sum += ((double)a[i] / (double)b[i]);
    sum /= 2;
    double ans = 0.0;
    rep(i, 0, n) {
        if(sum > (double)a[i] / (double)b[i]) {
            sum -= (double)a[i] / (double)b[i];
            ans += (double)a[i];
        } else {
            ans += sum * (double)b[i];
            printf("%.7f\n", ans);
            return 0;
        }
    }
}
