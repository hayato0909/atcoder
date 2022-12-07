#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, ll> P;

const ll mod = 998244353;

int main() {
    int n; cin >> n;
    vector<ll> a(2*n);
    vector<char> c(2*n);
    rep(i, 0, 2*n) cin >> a[i] >> c[i];
    int numr = 0, numg = 0, numb = 0;
    rep(i, 0, 2*n) {
        if(c[i] == 'R') numr++;
        else if(c[i] == 'G') numg++;
        else numb++;
    }
    if(numr % 2 == 0 && numg % 2 == 0 && numb % 2 == 0) {
        cout << "0" << endl;
        return 0;
    }

    vector<ll> v, w, other;
    if(numr % 2 != 0) {
        rep(i, 0, 2*n) {
            if(c[i] == 'R') v.push_back(a[i]);
        }
        if(numg % 2 != 0) {
            rep(i, 0, 2*n) {
                if(c[i] == 'G') w.push_back(a[i]);
            }
            rep(i, 0, 2*n) {
                if(c[i] == 'B') other.push_back(a[i]);
            }
        } else {
            rep(i, 0, 2*n) {
                if(c[i] == 'B') w.push_back(a[i]);
            }
            rep(i, 0, 2*n) {
                if(c[i] == 'G') other.push_back(a[i]);
            }
        }
    } else {
        rep(i, 0, 2*n) {
            if(c[i] == 'G') v.push_back(a[i]);
        }
        rep(i, 0, 2*n) {
            if(c[i] == 'B') w.push_back(a[i]);
        }
        rep(i, 0, 2*n) {
            if(c[i] == 'R') other.push_back(a[i]);
        }
    }

    ll ans = 1000000000000001;
    sort(w.begin(), w.end());
    sort(other.begin(), other.end());
    for(ll i:v) {
        int idx = lower_bound(w.begin(), w.end(), i) - w.begin();
        ll tmp1 = 1000000000000001, tmp2 = 1000000000000001;
        if(idx < w.size()) tmp1 = abs(i - w[idx]);
        if(idx - 1 >= 0) tmp2 = abs(w[idx-1] - i);
        ans = min(ans, min(tmp1, tmp2));
    }
    ll num1 = 1000000000000001, num2 = 1000000000000001;
    for(ll i:v) {
        int idx = lower_bound(other.begin(), other.end(), i) - other.begin();
        ll tmp1 = 1000000000000001, tmp2 = 1000000000000001;
        if(idx < other.size()) tmp1 = abs(i - other[idx]);
        if(idx - 1 >= 0) tmp2 = abs(other[idx-1] - i);
        num1 = min(num1, min(tmp1, tmp2));
    }
    for(ll i:w) {
        int idx = lower_bound(other.begin(), other.end(), i) - other.begin();
        ll tmp1 = 1000000000000001, tmp2 = 1000000000000001;
        if(idx < other.size()) tmp1 = abs(i - other[idx]);
        if(idx - 1 >= 0) tmp2 = abs(other[idx-1] - i);
        num2 = min(num2, min(tmp1, tmp2));
    }
    ans = min(ans, num1 + num2);
    cout << ans << endl;
}