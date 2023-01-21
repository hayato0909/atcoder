#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    string ans = "";

    rep(i, 0, n) {
        if (s[i] == 'n') {
            if (i + 1 < n && s[i+1] == 'a') {
                i++;
                ans += "nya";
                continue;
            }
        }
        ans += s[i];
    }
    cout << ans << endl;
}