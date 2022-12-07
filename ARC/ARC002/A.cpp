#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, ll> P;

const ll mod = 998244353;

int main() {
    int n; cin >> n;
    string ans = "YES";
    if(n % 4 != 0) ans = "NO";
    if(n % 100 == 0) ans = "NO";
    if(n % 400 == 0) ans = "YES";
    cout << ans << endl;
}