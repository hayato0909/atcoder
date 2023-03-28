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
    int n, q; cin >> n >> q;
    set<int> call;
    int mode, x;
    int p = 1;
    rep(i, 0, q) {
        cin >> mode;
        if (mode == 1) {
            call.insert(p);
            p++;
        } else if (mode == 2) {
            cin >> x;
            call.erase(x);
        } else {
            cout << *call.begin() << endl;
        }
    }
}

