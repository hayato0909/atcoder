#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000000;

int main() {
    int n,m; cin >> n >> m;
    int a[m+1],b[m+1];
    int tre[m+1];
    for(int i=0;i<m;i++) tre[i] = 0;
    for(int i=0;i<m;i++) {
        cin >> a[i] >> b[i];
        for(int j=0;j<b[i];j++) {
            int c; cin >> c;
            c--;
            tre[i] |= (1 << c);
        }
    }

    int dp[m+1][1<<n];
    for(int i=0;i<=m;i++) {
        for(int j=0;j<(1<<n);j++) dp[i][j] = INF;
    }
    dp[0][0] = 0;

    for(int i=0;i<m;i++) {
        for(int j=0;j<(1<<n);j++) {
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
            dp[i+1][j | tre[i]] = min(dp[i+1][j | tre[i]], dp[i][j]+a[i]);
        }
    }
    if(dp[m][(1<<n)-1] == INF) cout << "-1" << endl;
    else cout << dp[m][(1<<n)-1] << endl;
}