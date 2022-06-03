#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,c,d; cin >> r >> c >> d;
    int a[r+1][c+1];
    for(int i=1;i<=r;i++) {
        for(int j=1;j<=c;j++) cin >> a[i][j];
    }

    int ans = 0;
    for(int i=1;i<=min(d,r);i++) {
        for(int j=1;j<=c;j++) {
            if(i-1+j-1>d) break;
            if((d-(i-1+j-1))%2 == 0) ans = max(ans, a[i][j]);
        }
    }
    cout << ans << endl;
}