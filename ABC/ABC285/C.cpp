#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    string s; cin >> s;
    ll ans = 0, len = 1;
    for (int i=s.size()-1;i>=0;i--) {
        char c = s[i];
        ans += (c - 'A' + 1) * len;
        len *= 26;
    }
    cout << ans << endl;
}