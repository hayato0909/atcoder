#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

int main() {
    string s; cin >> s;
    rep(i, 0, s.size()) {
        if (s[i] == '0') s[i] = '1';
        else s[i] = '0';
    }
    cout << s << endl;
}