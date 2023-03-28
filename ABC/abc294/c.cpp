#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

const ll INF = 1001001001001001;

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, m) cin >> b[i];
    vector<int> c;
    rep(i, 0, n) c.push_back(a[i]);
    rep(i, 0, m) c.push_back(b[i]);
    sort(c.begin(), c.end());
    rep(i, 0, n) {
        int idx = lower_bound(c.begin(), c.end(), a[i]) - c.begin();
        cout << idx + 1 << " ";
    }
    cout << endl;
    rep(i, 0, m) {
        int idx = lower_bound(c.begin(), c.end(), b[i]) - c.begin();
        cout << idx + 1 << " ";
    }  
    cout << endl;
}

