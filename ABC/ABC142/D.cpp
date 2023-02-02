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
    ll a, b; cin >> a >> b;
    if (a < b) swap(a, b);

    ll g = gcd(a, b);
    ll ans = 1;
    for (ll i=2;i*i<=g;i++) {
        if (g % i == 0) {
            ans++;
            while(g % i == 0) {
                g /= i;
            }
        }
    }
    if (g != 1) ans++;
    cout << ans << endl;
}