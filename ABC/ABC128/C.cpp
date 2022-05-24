#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    int k[m+1];
    int s[m+1][n+1];
    for(int i=1;i<=m;i++) {
        cin >> k[i];
        for(int j=1;j<=k[i];j++) {
            cin >> s[i][j];
        }
    }
    int p[m+1];
    for(int i=1;i<=m;i++) cin >> p[i];
    int ans = 0;

    for(int bit=0;bit<(1<<n);bit++) {
        bool now[n+1];
        for(int i=0;i<n;i++) {
            if(bit & (1<<i)) now[i+1] = true;
            else now[i+1] = false;
        }

        bool flag = true;
        for(int i=1;i<=m;i++) {
            int tmp = 0;
            for(int j=1;j<=k[i];j++) {
                if(now[s[i][j]]) tmp++;
            }
            if(tmp%2 != p[i]) flag = false;
        }
        if(flag) ans++;
    }
    cout << ans << endl;
}