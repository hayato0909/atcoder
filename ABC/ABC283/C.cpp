#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;


int main() {
    string s; cin >> s;
    ll ans = 0;
    rep(i, 0, s.size()) {
        if(s[i] != '0') ans++;
        else {
            if(i != s.size() - 1 && s[i+1] == '0') {
                ans++;
                i++;
            } else {
                ans++;
            }
        }
    }
    cout << ans << endl;
}