#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

const int INF = 100100100;

int main() {
    int n; cin >> n;
    vector<int> c(n-1), s(n-1), f(n-1);
    rep(i, 0, n-1) cin >> c[i] >> s[i] >> f[i];
    rep(i, 0, n-1) {
        int t = 0;
        rep(j, i, n-1) {
            if (j == i) {
                t += c[j] + s[j];
            } else {
                if (t < s[j]) {
                    t += s[j] - t + c[j];
                } else {
                    t += (f[j] - t % f[j]) % f[j] + c[j];
                }
            }
        }
        cout << t << endl;
    }
    cout << "0" << endl;
}

