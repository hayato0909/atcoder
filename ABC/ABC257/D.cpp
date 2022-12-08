#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

int main() {
    int n; cin >> n;
    vector<ll> x(n), y(n), p(n);
    rep(i, 0, n) cin >> x[i] >> y[i] >> p[i];
    vector<vector<P>> v(n);
    rep(i, 0, n) {
        rep(j, 0, n) {
            ll s = (abs(x[i] - x[j]) + abs(y[i] - y[j])) / p[i];
            if((abs(x[i] - x[j]) + abs(y[i] - y[j])) % p[i] != 0) s++;
            v[i].push_back(P(s, j));
        }
        sort(v[i].begin(), v[i].end());
    }
    //rep(i, 0, v[1].size()) cout << v[1][i].first << " " << v[1][i].second << endl;

    ll ans = 100000000000;
    rep(i, 0, n) {
        ll l = -1, r = 10000000000;
        while(r - l > 1) {
            ll mid = (l + r) / 2;
            vector<int> check(n, 0);
            check[i]++;
            queue<int> q;
            q.push(i);
            while(!q.empty()) { 
                int pos = q.front(); q.pop();
                int next = 0;
                while(next < v[pos].size() && v[pos][next].first <= mid) {
                    if(check[v[pos][next].second] == 0) {
                        q.push(v[pos][next].second);
                        check[v[pos][next].second]++;
                    }
                    next++;
                }
            }
            bool flag = true;
            rep(j, 0, n) if(check[j] == 0) flag = false;
            if(flag) r = mid;
            else l = mid;
        }
        ans = min(ans, r);
    }
    cout << ans << endl;
}