#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    int n; cin >> n;
    ll a, b; cin >> a >> b;
    string s; cin >> s;
    s = s + s;


        int mid = n / 2;
        ll ans = 0;
        rep(i, 0, mid) {
            if (s[mid-i-1] != s[mid+i+n%2]) ans += b;
        }
        rep(i, 1, n) {
            ll tmp = a * (ll)i;
            int mi = mid + i;
            rep(j, 0, mid) {
                if (s[mi-j-1] != s[mi+j+n%2]) tmp += b;
            }
            ans = min(ans, tmp);
        }
        cout << ans << endl;

}