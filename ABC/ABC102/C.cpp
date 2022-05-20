#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++) a[i] -= i;
    sort(a+1, a+n+1);
    ll ans = 0, num;
    if(n % 2 == 1) num = a[(n + 1)/2];
    else num = (a[n/2]+a[n/2+1])/2;
    for(int i=1;i<=n;i++) ans += abs(a[i] - num);
    cout << ans << endl;
}