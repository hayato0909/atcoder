#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    ll ans = 1;
    for(int i=1;i<=n;i++) ans *= 2;
    cout << ans << endl;   
}