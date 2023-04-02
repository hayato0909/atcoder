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
    int n, x; cin >> n >> x;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    sort(a.begin(), a.end());
    rep(i, 0, n) {
        int num = a[i] + x;
        auto iter = lower_bound(a.begin(), a.end(), num);
        if (*iter == num) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}

