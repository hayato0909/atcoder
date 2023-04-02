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
    int n; cin >> n;
    string s; cin >> s;
    rep(i, 0, n-1) {
        if (s[i] == s[i+1]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}

