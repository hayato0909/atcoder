#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

const int INF = 100100100;
const ll LINF = 100100100100100100;

int main() {
    int n;
    string s;
    cin >> n >> s;
    rep(i, 0, n-2) if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C') {cout << i + 1 << endl; return 0;}
    cout << -1 << endl;
}
