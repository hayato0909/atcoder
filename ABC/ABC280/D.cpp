#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, ll> P;

const ll mod = 998244353;

vector<P> prime_factor(ll n) {
    vector<P> ret;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i != 0) continue;
        ll tmp = 0;
        while (n % i == 0) {
            tmp++;
            n /= i;
        }
        ret.push_back(P(i, tmp));
    }
    if (n != 1) ret.push_back(P(n, 1));
    return ret;
}

ll count(ll n, ll prime) {
    ll ans = 0;
    ll tmp = prime;
    while(tmp <= n) {
        ans += n / tmp;
        tmp *= prime;
    }
    return ans;
}

int main() {
    ll k; cin >> k;
    vector<P> v = prime_factor(k);

    ll ans = 0;
    rep(i, 0, v.size()) {
        ll prime = v[i].first, num = v[i].second;
        if(num == 1) {
            ans = max(ans, prime);
        } else {
            ll l = prime, r = prime * num;
            while(r - l > 1) {
                ll mid = (l + r) / 2;
                ll cnt = count(mid, prime);
                if(cnt >= num) r = mid;
                else l = mid;
            }
            //cout << prime << " " << r << endl;
            ans = max(ans, r);
        }
    }
    //cout << count(5, 2) << endl;
    cout << ans << endl;
}