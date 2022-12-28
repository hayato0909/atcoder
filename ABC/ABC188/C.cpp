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
    int num = 1;
    rep(i, 0, n) num *= 2;
    vector<int> a(num);
    rep(i, 0, num) cin >> a[i];
    int tmp1 = -1, tmp2 = -1;
    rep(i, 0, num/2) tmp1 = max(tmp1, a[i]);
    rep(i, num/2, num) tmp2 = max(tmp2, a[i]);
    int ans = min(tmp1, tmp2);
    rep(i, 0, num) {
        if(a[i] == ans) cout << i + 1 << endl;
    }
}