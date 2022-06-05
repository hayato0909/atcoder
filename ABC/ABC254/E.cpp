#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;

int main() {
    int n, m; cin >> n >> m;
    vector<int> v[n+1];
    int a,b; 
    for(int i=0;i<m;i++) {
        cin >> a >> b; 
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int pos[n+1];
    for(int i=1;i<=n;i++) pos[i] = -1;
    int q; cin >> q;
    int x,k;
    vector<int> f;
    queue<P> Q;

    for(int i=0;i<q;i++) {
        cin >> x >> k;
        int ans = x;
        Q.push(P(x, 0));
        f.push_back(x);
        pos[x] = 1;
        while(!Q.empty()) {
            P now = Q.front(); Q.pop();
            if(now.second == k) continue;
            for(int next:v[now.first]) {
                if(pos[next] == -1) {
                    pos[next] = 1;
                    f.push_back(next);
                    ans += next;
                    Q.push(P(next, now.second+1));
                }
            }
        }
        cout << ans << endl;
        while(f.size() != 0) {
            pos[f.back()] = -1;
            f.pop_back();
        }
    }
}