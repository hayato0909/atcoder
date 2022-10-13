#include <bits/stdc++.h>
using namespace std;
#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n; cin >> n;
    string s[n];
    rep(i, 0, n) cin >> s[i];
    rep(i, 0, n) sort(s[i].begin(), s[i].end());
    map<string, int> m;
    ll ans = 0;
    rep(i, 0, n) {
        if(m[s[i]] == 0) m[s[i]]++;
        else {
            ans += m[s[i]];
            m[s[i]]++;
        }
    }
    cout << ans << endl;
}