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
    ll n,m,k; cin >> n >> m >> k;
    ll a[n+1], b[m+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=m;i++) cin >> b[i];

    ll sum_a[n+1], sum_b[m+1];
    sum_a[0] = 0;
    sum_b[0] = 0;
    for(int i=1;i<=n;i++) sum_a[i] = sum_a[i-1] + a[i];
    for(int i=1;i<=m;i++) sum_b[i] = sum_b[i-1] + b[i];

    int ans = 0;
    int j = m;
    for(int i=0;i<=n;i++) {
        if(sum_a[i] > k) break;
        while(sum_a[i] + sum_b[j] > k) j--;
        ans = max(ans, i+j);
    }
    cout << ans << endl;
}