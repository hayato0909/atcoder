#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;


int main() {
    int k; cin >> k;
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    rep(i, 0, k) cout << a[i];
    cout << endl;
}