#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, ll> P;

const ll mod = 1000000007;

int main(){
    ll n, m; cin >> n >> m;
    vector<P> v;
    vector<ll> a(n);
    ll sum = 0;
    rep(i, 0, n) {
        cin >> a[i];
        v.push_back(P(a[i]%m, a[i]));
        sum += a[i];
    }
    sort(v.begin(), v.end());

    ll now = v[0].second;
    ll ans = now;

    rep(i, 1, n) {
        if(v[i-1].first == v[i].first || v[i-1].first + 1 == v[i].first) {
            now += v[i].second;
        } else {
            now = v[i].second;
        }
        ans = max(ans, now);
        //cout << ans << endl;
    }
    if(v[n-1].first == m - 1 && sum != now) {
        int i = 0;
        ll pos = -1;
        while((v[i].first == pos || v[i].first == pos + 1) && i < n) {
            now += v[i].second;
            pos = v[i].first;
            i++;
        }
        ans = max(ans, now);
    }
    cout << max(sum-ans, 0ll) << endl;
}