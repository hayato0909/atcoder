#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;

ll a, b, x; 

ll price(ll n) {
    ll d = to_string(n).length();
    return a * n + b * d;
}

int main() {
    cin >> a >> b >> x;
    ll l = 0, r = 1000000001;
    while(r != l + 1) {
        ll mid = (l + r) / 2;
        if(price(mid) <= x) l = mid;
        else r = mid;
    }
    cout << l << endl;
}
