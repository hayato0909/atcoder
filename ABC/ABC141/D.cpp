#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    else return gcd(b, a%b);
}

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    priority_queue<int> Q;
    rep(i, 0, n) Q.push(a[i]);

    rep(i, 0, m) {
        int num = Q.top(); Q.pop();
        num /= 2;
        Q.push(num);
    }
    ll ans = 0;
    while(!Q.empty()) {
        ans += (ll)Q.top();
        Q.pop();
    }
    cout << ans << endl;
}