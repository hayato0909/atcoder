#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n; cin >> n;
    for(ll i = 0; ; i++) {
        if(stoll(to_string(i) + to_string(i)) > n) {
            cout << i-1 << endl;
            return 0;
        }
    }
}