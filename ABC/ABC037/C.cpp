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
    int n,k; cin >> n >> k;
    ll a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];

    ll ans = 0, tmp = 0;
    for(int i=1;i<=k;i++) tmp += a[i];
    ans += tmp;
    for(int i=k+1;i<=n;i++) {
        tmp -= a[i-k];
        tmp += a[i];
        ans += tmp;
    }
    cout << ans << endl;
}