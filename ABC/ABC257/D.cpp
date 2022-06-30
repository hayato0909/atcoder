#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 10000000000000000;

int main() {
    int n; cin >> n;
    ll x[n+1], y[n+1], p[n+1];
    for(int i=1;i<=n;i++) cin >> x[i] >> y[i] >> p[i];

    ll l = 0, r = 4000000000;
    while(r - l > 1) {
        ll mid = (l + r) / 2;
        vector<int> v[n+1];
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                if(i == j) continue;
                if(p[i]*mid >= (ll)(abs(x[i]-x[j])+abs(y[i]-y[j]))) v[i].push_back(j);
            }
        }
        int check[n+1];
        bool flag = false;
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) check[j] = -1;
            queue<int> Q;
            Q.push(i);
            check[i] = 1;
            while(!Q.empty()) {
                int now = Q.front(); Q.pop();
                for(int next:v[now]) {
                    if(check[next] == -1) {
                        Q.push(next);
                        check[next] = 1;
                    }
                }
            }
            flag = true;
            for(int j=1;j<=n;j++) {
                if(check[j] == -1) flag = false;
            }
            if(flag) break;
        }
        if(flag) r = mid;
        else l = mid;
    }
    cout << r << endl;
}