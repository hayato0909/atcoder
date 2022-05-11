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

typedef long long ll;
typedef pair<ll, ll> p;


int main() {
    int n,w; cin >> n >> w;
    ll a[n+1],b[n+1];
    for(int i=1;i<=n;i++) cin >> a[i] >> b[i];
    p cheese[n+1];
    for(int i=1;i<=n;i++) cheese[i] = p(a[i], b[i]);
    sort(cheese+1, cheese+n+1);

    ll ans = 0, weigh = 0;
    for(int i=n;i>=1;i--) {
        if(weigh + cheese[i].second <= w) {
            ans += cheese[i].first * cheese[i].second;
            weigh += cheese[i].second;
        } else {
            ans += cheese[i].first * (w - weigh);
            weigh = w;
        }
    }

    cout << ans << endl;
}