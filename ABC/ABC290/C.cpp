#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    map<int, int> m;
    rep(i, 0, n) {
        m[a[i]]++;
    }
    rep(i, 0, k) {
        if (m[i] == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << k << endl;
}
