#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    ll n; cin >> n;
    if (n == 0) {
        cout << "0" << endl;
        return 0;
    }
    string ans = "";
    while (n != 1) {
        if (n % 2 == 0) ans += "0";
        else ans += "1";
        if (n < 0) {
            n = -n;
            n = (n + 1) / 2;
        } else {
            n = n / 2;
            n = -n;
        }
    }
    ans += "1";
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
