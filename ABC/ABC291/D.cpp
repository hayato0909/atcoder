#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 998244353;

int main() {
    int n; cin >> n;
    vector<ll> a(n), b(n);
    rep(i, 0, n) cin >> a[i] >> b[i];
    vector<ll> omote(n), ura(n);
    omote[0] = 1;
    ura[0] = 1;
    rep(i, 1, n) {
        omote[i] = 0;
        ura[i] = 0;
        if (a[i] != a[i-1]) omote[i] = (omote[i] + omote[i-1]) % mod;
        if (a[i] != b[i-1]) omote[i] = (omote[i] + ura[i-1]) % mod;
        if (b[i] != a[i-1]) ura[i] = (ura[i] + omote[i-1]) % mod;
        if (b[i] != b[i-1]) ura[i] = (ura[i] + ura[i-1]) % mod;
    }
    cout << (omote[n-1] + ura[n-1]) % mod << endl;
}
