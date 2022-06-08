#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll mod = 998244353;
const ll INF = 1000000000;

int main() {
    int n; cin >> n;
    ll f[n+1];
    f[0] = 0;
    for(int i=1;i<=n;i++) {
        ll res = INF;
        res = min(res, f[i-1]+1);

        int x = 6;
        while(x <= i) {
            res = min(res, f[i-x] + 1);
            x *= 6;
        }

        x = 9;
        while(x <= i) {
            res = min(res, f[i-x]+1);
            x *= 9;
        }
        f[i] = res;
    }
    cout << f[n] << endl;
}