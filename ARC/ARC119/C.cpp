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
    for(int  i=1;i<=n;i++) cin >> a[i];
    ll dp[n+1];
    dp[0] = 0;
    for(int i=1;i<=n;i++) {
        if(i%2 == 0) dp[i] = dp[i-1] - a[i];
        else dp[i] = dp[i-1] + a[i];
    }
    map<ll, ll> cnt;
    ll ans = 0;
    for(int i=0;i<=n;i++) {
        ans += cnt[dp[i]];
        cnt[dp[i]]++;
    }
    cout << ans << endl;
}