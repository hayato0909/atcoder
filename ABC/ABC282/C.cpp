#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;


int main() {
    int n; cin >> n;
    string s; cin >> s;
    bool inside = false;
    rep(i, 0, n) {
        if(s[i] == '"') inside = !inside;
        else if(s[i] == ',' && !inside) s[i] = '.';
    }
    cout << s << endl;
}