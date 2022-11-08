#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, ll> P;

const ll mod = 1000000007;

int main(){
    int n; cin >> n;
    int a, b; cin >> a >> b;
    int m; cin >> m;
    vector<int> v[n+1];
    int x, y;
    rep(i, 0, m) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    queue<int> q, Q;
    q.push(a);
    vector<int> count(n+1, -1);
    vector<ll> num(n+1, -1);
    num[a] = 1;

    Q.push(a);
    count[a] = 0;
    while(!Q.empty()) {
        int pos = Q.front(); Q.pop();
        for(int next:v[pos]) {
            if(count[next] == -1) {
                Q.push(next);
                count[next] = count[pos] + 1;
            }
        }
    }

    while(!q.empty()) {
        int pos = q.front(); q.pop();
        if(pos == b) break;
        for(int next:v[pos]) {
            if(count[next] == count[pos] + 1) {
                if(num[next] == -1) {
                    num[next] = 0;
                    q.push(next);
                }
                num[next] = (num[next] + num[pos]) % mod;
            }
        }
    }
    cout << num[b] << endl;
}