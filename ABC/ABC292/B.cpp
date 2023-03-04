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
    int n, q; cin >> n >> q;
    vector<int> card(n, 0);
    rep(i, 0, q) {
        int mode, x; cin >> mode >> x;
        x--;
        if (mode == 1) {
            card[x]++;
        } else if (mode == 2) {
            card[x] += 2;
        } else {
            if (card[x] >= 2) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
}
