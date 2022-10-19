#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;

typedef long long ll;
typedef pair<int, int> P;

int main(){
    int n, k; cin >> n >> k;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];
    ll g = 0, m = 0;
    rep(i, 0, n) {
        g = gcd(g, a[i]);
        m = max(m, a[i]);
    }
    if(k <= m && k % g == 0) cout << "POSSIBLE" << endl;
    else cout << "IMPOSSIBLE" << endl;
}