#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n, k; cin >> n >> k;
    int a[k+1];
    for(int i=1;i<=k;i++) cin >> a[i];
    int dp[n+1];
    dp[0] = 0;
    for(int i=1;i<=n;i++) {
        int ans = 0;
        for(int j=1;j<=k;j++) {
            if(a[j] > i) break;
            ans = max(ans, a[j]+(i-a[j])-dp[i-a[j]]);
        }
        dp[i] = ans;
    }
    cout << dp[n] << endl;
}