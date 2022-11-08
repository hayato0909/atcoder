#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, ll> P;

int main(){
    ll n, m; cin >> n >> m;
    vector<P> v;
    ll a, b;
    rep(i, 0, n) {
        cin >> a >> b;
        v.push_back(P(a, b));
    }
    sort(v.begin(), v.end());
    ll ans = 0, num = 0;
    rep(i, 0, n) {
        if(num + v[i].second < m) {
            ans += v[i].first * v[i].second;
            num += v[i].second;
        } else {
            ans += v[i].first * (m - num);
            num = m;
            break;
        }
    }
    cout << ans << endl;
}