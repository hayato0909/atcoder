#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

const int INF = 100100100;

int main() {
    vector<string> s(8);
    rep(i, 0, 8) cin >> s[i];
    string alp = "abcdefgh";
    rep(i, 0, 8) rep(j, 0, 8) {
        if (s[i][j] == '*') {
            cout << alp[j] << 8 - i << endl;
        }
    }
}

