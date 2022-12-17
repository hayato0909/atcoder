#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;


int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> v(n+1);
    int V, U;
    rep(i, 0, m) {
        cin >> U >> V;
        v[V].push_back(U);
        v[U].push_back(V);
    }
    vector<int> check(n+1, -1);
    vector<int> num(2*n+1, 0);
    int cnt = 0;
    
    rep(i, 1, n+1) {
        if(check[i] != -1) continue;
        queue<int> q;
        q.push(i);
        check[i] = cnt;
        while(!q.empty()) {
            int now = q.front(); q.pop();
            for(int next:v[now]) {
                if(check[now] == check[next]) {
                    cout << "0" << endl;
                    return 0;
                } else if (check[next] == -1) {
                    if(check[now] % 2 == 0) check[next] = check[now] + 1;
                    else check[next] = check[now] - 1;
                    q.push(next);
                }
            }
        }
        cnt += 2;
    }

    rep(i, 1, n+1) num[check[i]]++;
    ll ans = 0;
    rep(i, 1, n+1) {
        ans += ((ll)n - (ll)v[i].size() - (ll)num[check[i]]);
    }
    cout << ans / 2 << endl;
}