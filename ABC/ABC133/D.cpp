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
    ll sum = 0;
    ll ans[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++) {
        if(i%2 == 0) sum -= a[i];
        else sum += a[i];
    }
    ans[1] = sum;
    for(int i=2;i<=n;i++) {
        ans[i] = 2*a[i-1] - ans[i-1];
    }

    for(int i=1;i<=n;i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}