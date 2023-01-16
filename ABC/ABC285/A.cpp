#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    int a, b; cin >> a >> b;
    if (a > b) swap(a, b);
    if (b == 2 * a || b == 2 * a + 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}
