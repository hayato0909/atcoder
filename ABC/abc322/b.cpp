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

bool front(string s, string t) {
    int n = s.size();
    rep(i, 0, n) {
        if (s[i] != t[i]) return false;
    }
    return true;
}

bool back(string s, string t) {
    int n = s.size();
    int m = t.size();
    rep(i, 0, n) {
        if (s[n - i - 1] != t[m - i - 1]) return false;
    }
    return true;
}

int main() {
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    if (front(s, t) && back(s, t)) cout << 0 << endl;
    else if (front(s, t)) cout << 1 << endl;
    else if (back(s, t)) cout << 2 << endl;
    else cout << 3 << endl;
}
