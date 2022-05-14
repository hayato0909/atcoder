#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    ll a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    ll dp[n+1];
    dp[0] = 0;
    dp[1] = a[1];
    for(int i=2;i<=n;i++) {
        dp[i] = min(dp[i-2]+a[i-1], dp[i-1]+a[i]);
    }
    ll ans = dp[n];
    dp[2] = a[2];
    dp[1] = 0;
    for(int i=3;i<n;i++) {
        dp[i] = min(dp[i-2]+a[i-1], dp[i-1]+a[i]);
    }
    ans = min(ans, dp[n-1]+a[n]);
    cout << ans << endl;
}