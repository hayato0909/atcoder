#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, ll> P;

const ll mod = 1000000007;

int main(){
    int n; cin >> n;
    map<int, vector<int> > v;
    int a, b;
    rep(i, 0, n) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int ans = 1;
    map<int, int> m;
    m[1] = 1;
    queue<int> q;
    q.push(1);

    while(!q.empty()) {
        int now = q.front();
        q.pop();
        ans = max(ans, now);
        for(int next:v[now]) {
            if(m[next] == 0) {
                q.push(next);
                m[next]++;
            }
        }
    }
    cout << ans << endl;
}