#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

const int INF = 100100100;
const ll LINF = 100100100100100100;

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n);
    rep(i, 0, m) cin >> a[i];
    int min = 0;
    rep(i, 1, n+1) {
        if (i < a[min]) cout << a[min] - i << endl;
        else {
            while(i > a[min]) min++;
            cout << a[min] - i << endl;
        }
    }
}
