#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
using namespace std;

const int mod = 998244353;

int main() {
    int n,m; cin >> n >> m;
    map<int, vector<int> > g;
    for(int i=1;i<=m;i++) {
        int u,v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int dp[n+1];
    dp[0] = 1;
    for(int i=1;i<=n;i++) {
        int cnt = 0;
        for(int pos:g[i]) {
            if(g[pos].size() > 1 && i < pos) cnt++;
        }
        if(dp[i-1] == 0 && cnt != 0) dp[i-1] = 1;
        if(cnt >= 2) dp[i] = (dp[i-1] * cnt) % mod;
        else dp[i] = dp[i-1];
    }

    cout << dp[n] << endl;
}