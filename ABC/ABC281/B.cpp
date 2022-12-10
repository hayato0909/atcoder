#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

int main() {
    string s; cin >> s;
    string ans = "Yes";
    if(!('A' <= s[0] && s[0] <= 'Z')) ans = "No";
    if(!(1 < s.size() && '1' <= s[1] && s[1] <= '9')) ans = "No";
    rep(i, 2, 7) {
        if(!(i < s.size() && '0' <= s[i] && s[i] <= '9')) ans = "No";
    }
    if(!(s.size() == 8 && 'A' <= s[7] && s[7] <= 'Z')) ans = "No";
    cout << ans << endl;
}