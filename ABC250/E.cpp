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

const int M = 200000;
const int INF = 10000000;

int main() {
    int n; cin >> n;
    int a[n+1], b[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++) cin >> b[i];
    map<int, int> num, num2;
    for(int i=1;i<=n;i++) {
        if(num[b[i]] == 0) num[b[i]] = i;
        if(num2[a[i]] == 0) num2[a[i]] = i;
    }
    int dp[n+1], dp2[n+1];
    dp[0] = 0;
    dp2[0] = 0;
    for(int i=1;i<=n;i++) {
        if(num[a[i]] == 0) dp[i] = INF;
        else dp[i] = max(dp[i-1], num[a[i]]);

        if(num2[b[i]] == 0) dp2[i] = INF;
        else dp2[i] = max(dp2[i-1], num2[b[i]]);
    }
    int q; cin >> q;
    int x[q], y[q];
    for(int i=0;i<q;i++) cin >> x[i] >> y[i];
    for(int i=0;i<q;i++) {
        if(dp[x[i]] <= y[i] && dp2[y[i]]<=x[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}