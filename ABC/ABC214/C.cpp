#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000000;

int main() {
    int n; cin >> n;
    int s[n+1];
    for(int i=1;i<=n;i++) cin >> s[i];
    int t[n+1];
    for(int i=1;i<=n;i++) cin >> t[i];

    int ans[n+1];
    ans[1] = t[1];

    for(int i=2;i<=n;i++) {
        ans[i] = min(t[i], ans[i-1]+s[i-1]);
    }
    if(ans[1] > ans[n] + s[n]) {
        ans[1] = ans[n] + s[n];
        for(int i=2;i<=n;i++) {
            ans[i] = min(t[i], ans[i-1]+s[i-1]);
        }
    }
    for(int i=1;i<=n;i++) cout << ans[i] << endl;
}