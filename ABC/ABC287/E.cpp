#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int n;
vector<int> ans;
vector<string> s;

void solve(vector<int> v, int cnt) {
    vector<vector<int>> next(26);
    for (int i: v) {
        if (s[i].size() == cnt) ans[i] = cnt;
        else next[s[i][cnt]-'a'].push_back(i);
    }
    
    for (int i=0;i<26;i++) {
        if (next[i].size() == 1) ans[next[i][0]] = cnt;
        else if (next[i].size() > 1) solve(next[i], cnt+1);
    }
}


int main() {
    cin >> n;
    s.resize(n);
    ans.resize(n);
    rep(i, 0, n) cin >> s[i];
    vector<int> all;
    rep(i, 0, n) all.push_back(i);
    solve(all, 0);
    rep(i, 0, n) cout << ans[i] << endl;
}