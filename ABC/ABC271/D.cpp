#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n, s; cin >> n >> s;
    int a[n+1], b[n+1];
    bool change[n+1];
    for(int i=1;i<=n;i++) cin >> a[i] >> b[i];
    int dp[n+1][s+1];
    for(int i=0;i<=s;i++) dp[0][i] = 0;
    dp[0][0] = 1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=s;j++) {
            dp[i][j] = 0;
            if(j - a[i] >= 0 && dp[i-1][j-a[i]] == 1) dp[i][j] = 1;
            if(j - b[i] >= 0 && dp[i-1][j-b[i]] == 1) dp[i][j] = 1;
        }
    }
    if(dp[n][s] == 0) {
        cout << "No" << endl;
    } else {
        int sum = s;
        for(int i=n;i>=1;i--) {
            if(dp[i-1][sum-a[i]] == 1) {
                change[i] = false;
                sum -= a[i];
            } else {
                change[i] = true;
                sum -= b[i];
            }
        }
        cout << "Yes" << endl;
        for(int i=1;i<=n;i++) {
            if(change[i]) cout << "T";
            else cout << "H";
        }
        cout << endl;
    }
}