#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, int> P;
typedef pair<P, int> PP;

int main() {
    int n; cin >> n;
    ll x[n+1], c[n+1];
    for(int i=1;i<=n;i++) cin >> x[i];
    for(int i=1;i<=n;i++) cin >> c[i];

    ll num[n+1];
    bool flag[n+1];
    ll ans = 0;
    for(int i=1;i<=n;i++) {
        num[i] = 0;
        flag[i] = false;
    }
    for(int i=1;i<=n;i++) num[x[i]] += c[i];
    priority_queue<P, vector<P>, greater<P> > Q;
    for(int i=1;i<=n;i++) {
        Q.push(P(num[i], i));
    }

    for(int i=0;i<n;i++) {
        while(flag[Q.top().second]) Q.pop();
        P now = Q.top();
        Q.pop();
        flag[now.second] = true;
        if(flag[x[now.second]]) ans += c[now.second];
        else {
            num[x[now.second]] -= c[now.second];
            Q.push(P(num[x[now.second]], x[now.second]));
        }
    }
    cout << ans << endl;
}