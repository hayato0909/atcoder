#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 998244353;

int main() {
    int n; cin >> n;
    vector<ll> s(n);
    rep(i, 0, n) cin >> s[i];
    vector<ll> a(n);
    a[0] = s[0];
    rep(i, 1, n) {
        a[i] = s[i] - s[i-1];
    }
    rep(i, 0, n) cout << a[i] << " ";
    cout << endl;
}