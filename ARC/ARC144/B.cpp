#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

int main() {
    ll n, a, b; cin >> n >> a >> b;
    vector<ll> A(n);
    rep(i, 0, n) cin >> A[i];
    sort(A.begin(), A.end());
    ll l = A[0], r = A[n-1] + 1;
    while(r - l > 1) {
        ll mid = (l + r) / 2;
        ll cnt = 0;
        rep(i, 0, n) {
            if(A[i] < mid) {
                ll diff = mid - A[i];
                if(diff % a == 0) cnt -= diff / a;
                else cnt -= (diff / a + 1);
            } else if(A[i] > mid) {
                ll diff = A[i] - mid;
                cnt += diff / b;
            }
        }
        if(cnt >= 0) l = mid;
        else r = mid;
    }
    cout << l << endl;
}