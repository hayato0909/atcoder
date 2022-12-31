#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;


int main() {
    int r, c; cin >> r >> c;
    if(max(abs(r-8), abs(c-8)) % 2 == 1) cout << "black" << endl;
    else cout << "white" << endl;
}