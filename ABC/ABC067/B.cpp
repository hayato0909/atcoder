#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 998244353;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    rep(i, 0, n) cin >> l[i];
    sort(l.begin(), l.end());
    int ans = 0;
    rep(i, 0, k) ans += l[n-1-i];
    cout << ans << endl;
}
