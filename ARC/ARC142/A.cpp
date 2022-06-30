#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n,k;
    cin >> n >> k;
    ll ans = 0;

    ll tmp = k;
    while(tmp != 0 && tmp <= n) {
        ans++;
        tmp *= 10;
    }

    tmp = 0;
    while(k > 9) {
        tmp = tmp*10 + k%10;
        k /= 10;
    }
    tmp = tmp*10 + k;
    cout << tmp << endl;
    while(tmp != 0 && tmp <= n) {
        ans++;
        tmp *= 10;
    }

    cout << ans << endl;
}