#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    ll ans = 0;
    ll same = 0;
    map<int, int> m;
    m[a[1]]++;
    m[a[2]]++;
    for(int i=3;i<=n;i++) {
        ll num = (ll)(i - 1 - m[a[i]]);
        if(num >= 2) {
            ans += (num * (num - 1))/2 - (same - (m[a[i]]*(m[a[i]]-1)/2));
        }
        m[a[i]]++;
        if(m[a[i]] == 2) same++;
        else if(m[a[i]] > 2) {
            same += m[a[i]]-1;
        }
    }
    cout << ans << endl;
}