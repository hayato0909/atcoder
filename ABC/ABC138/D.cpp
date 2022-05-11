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

typedef long long ll;

int main() {
    int n,q; cin >> n >> q;
    int a, b;
    map<int, vector<int> > v;
    for(int i=1;i<n;i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    ll dp[n+1];
    bool cheak[n+1];
    for(int i=1;i<=n;i++) {
        dp[i] = 0;
        cheak[i] = false;
    }
    for(int i=0;i<q;i++) {
        int p,x; cin >> p >> x;
        dp[p] += x;
    }
    queue<int> Q;
    Q.push(1);
    cheak[1] = true;
    while(!Q.empty()) {
        int pos = Q.front(); Q.pop();
        for(int i:v[pos]) {
            if(!cheak[i]) {
                cheak[i] = true;
                dp[i] += dp[pos];
                Q.push(i);
            }
        }
    }
    for(int i=1;i<=n;i++) cout << dp[i] << " ";
    cout << endl;
}