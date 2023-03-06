#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 998244353;

const int INF = 1001001001;

int main() {
    double a, b;
    cin >> a >> b;
    if ( a > b ) swap(a, b);

    if (a * 2.0 / sqrt(3) <= b) {
        double ans = a * 2.0 / sqrt(3);
        printf("%.10f\n", ans);
        return 0;
    }

    double pi = acos(-1);
    double r30 = pi * 30 / 180;
    double ng = 0, ok = pi * 30 / 180;
    rep(i, 0, 80) {
        double mid = (ng + ok) / 2;
        if (a * cos(r30-mid) - b * cos(mid) < 0) ng = mid;
        else ok = mid;
    }
    printf("%.10f\n", a/cos(ng));
}
