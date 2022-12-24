#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;


int main() {
    int n; cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    int q; cin >> q;
    rep(i, 0, q) {
        int mode; cin >> mode;
        if(mode == 1) {
            int k, x; cin >> k >> x;
            a[k-1] = x;
        } else {
            int k; cin >> k;
            cout << a[k-1] << endl;
        }
    }
}