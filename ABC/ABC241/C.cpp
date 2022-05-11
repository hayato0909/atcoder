#include <iostream>
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

int main() {
    int n; cin >> n;
    int a[n+1];
    a[0] = 0;
    for(int i=1;i<=n;i++) cin >> a[i];

    int dp[n+1];
    dp[0] = 0;
    dp[1] = 0;
    for(int i=2;i<=n;i++) {
        dp[i] = min(dp[i-2]+abs(a[i-2]-a[i]), dp[i-1]+abs(a[i-1]-a[i]));
    }

    cout << dp[n] << endl;
}