#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    string s, t;
    cin >> s >> t;

    string ss = "";
    rep(i, 0, t.size()) ss += s[s.size()-(t.size()-i)];

    vector<bool> dp(t.size());
    if (ss[t.size()-1] != '?' && t[t.size()-1] != '?' && ss[t.size()-1] != t[t.size()-1]) dp[t.size()-1] = false;
    else dp[t.size()-1] = true;
    for (int i=t.size()-2;i>=0;i--) {
        if (dp[i+1] == false) dp[i] = false;
        else {
            if (ss[i] != '?' && t[i] != '?' && ss[i] != t[i]) dp[i] = false;
            else dp[i] = true;
        }
    }
    if (dp[0]) cout << "Yes" << endl;
    else cout << "No" << endl;

    rep(i, 0, t.size()) {
        if (i != 0) {
            if (dp[i-1] == false) {
                dp[i] = false;
                cout << "No" << endl;
                continue;
            }
        }
        if (i != t.size() - 1) {
            if (dp[i+1] == false) {
                if (s[i] != '?' && t[i] != '?' && s[i] != t[i]) dp[i] = false;
                else dp[i] = true;
                cout << "No" << endl;
                continue;
            }
        }
        if (s[i] != '?' && t[i] != '?' && s[i] != t[i]) dp[i] = false;
        else dp[i] = true;
        if (dp[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}