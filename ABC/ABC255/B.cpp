#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin >> n >> k;
    int a[n+1];
    for(int i=1;i<=n;i++) a[i] = 0;
    int b[k+1];
    for(int i=1;i<=k;i++) {
        cin >> b[i];
        a[b[i]] = 1;
    }
    int x[n+1],y[n+1];
    for(int i=1;i<=n;i++) cin >> x[i] >> y[i];

    double ans = 0;
    for(int i=1;i<=n;i++) {
        if(a[i] == 1) continue;
        double tmp = 10000000.0;
        for(int j=1;j<=k;j++) {
            tmp = min(tmp, sqrt( (long long)(x[i]-x[b[j]])*(x[i]-x[b[j]]) + (long long)(y[i]-y[b[j]])*(y[i]-y[b[j]]) ));
        }
        ans = max(tmp, ans);
    }
    printf("%.8f\n",ans);
}