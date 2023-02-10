#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

int gcd(int a, int b) {
    if (a < b) return gcd(b, a);
    if (b == 0) return a;
    else return gcd(b, a%b);
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    vector<int> l(n), r(n);
    l[0] = a[0];
    rep(i, 1, n) l[i] = gcd(l[i-1], a[i]);
    r[n-1] = a[n-1];
    for (int i = n - 2; i >= 0; i--) r[i] = gcd(r[i+1], a[i]);
    int ans = 0;
    rep(i, 0, n) {
        int tmp;
        if (i == 0) tmp = r[1];
        else if (i == n-1) tmp = l[i-1];
        else tmp = gcd(l[i-1], r[i+1]);
        ans = max(ans, tmp);
    } 
    cout << ans << endl;
}