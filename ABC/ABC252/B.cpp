#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin >> n >> k;
    int a[n+1], b[k+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=k;i++) cin >> b[i];
    int dislike[n+1];
    for(int i=1;i<=n;i++) dislike[i] = 0;
    for(int i=1;i<=k;i++) dislike[b[i]] = 1;
    int d = 0;
    for(int i=1;i<=n;i++) d = max(d, a[i]);
    string ans = "No";
    for(int i=1;i<=n;i++) {
        if(a[i] == d && dislike[i] == 1) ans = "Yes";
    }
    cout << ans << endl;
}