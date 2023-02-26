#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    map<P, int> m;
    P pos = P(0, 0);
    m[pos] = 1;
    string ans = "No";
    int x = pos.first, y = pos.second;
    rep(i, 0, n) {
        if (s[i] == 'R') {
            x++;
        } else if (s[i] == 'L') {
            x--;
        } else if (s[i] == 'U') {
            y++;
        } else {
            y--;
        }
        if (m[P(x, y)] != 0) {
            ans = "Yes";
        }
        m[P(x, y)]++;
    }
    cout << ans << endl;
}
