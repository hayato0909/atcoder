#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,x,t,d;
    cin >> n >> m >> x >> t >> d;
    int ans = 0;

    if(m >= x) ans = t;
    else ans = t - (x - m) * d;

    cout << ans << endl;
}