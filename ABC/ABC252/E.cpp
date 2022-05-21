#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;
typedef pair<int, P> PP;
typedef long long ll;
const ll INF = 10000000000000;

int main() {
    int n,m; cin >> n >> m;
    int a, b, c;
    map<int, vector<PP> > v;
    for(int i=0;i<m;i++) {
        cin >> a >> b >> c;
        v[a].push_back(PP(i+1, P(b, c)));
        v[b].push_back(PP(i+1, P(a, c)));
    }
    ll d[n+1];
    int which[n+1];
    queue<int> Q;
    for(int i=1;i<=n;i++) which[i] = 0;
    for(int i=1;i<=n;i++) d[i] = INF;
    Q.push(1);
    d[1] = 0;
    while(!Q.empty()) {
        int now = Q.front(); Q.pop();
            for(PP j:v[now]) {
                P k = j.second;
                if(k.first == 1) continue;
                if(which[k.first] == 0) {
                    d[k.first] = (ll)(d[now] + k.second);
                    which[k.first] = j.first;
                    Q.push(k.first);
                } else if(d[k.first] > (ll)(d[now] + k.second)) {
                    d[k.first] = (ll)(d[now] + k.second);
                    which[k.first] = j.first;
                    Q.push(k.first);
                }
            }
    }
    for(int i=2;i<=n;i++) cout << which[i] << " ";
    cout << endl;
}