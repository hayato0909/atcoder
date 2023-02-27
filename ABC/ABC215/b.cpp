#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    ll n; cin >> n;
    ll t = 1;
    int ans = 0;
    while (n >= t) {
        t *= 2;
        ans++;
    }
    cout << --ans << endl;
}