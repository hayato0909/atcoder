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
const int INF = 200001;

int main() {
    int n;
    cin >> n;
    ll a[n+1];
    int aa[n+1], cnt = 0;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
        aa[i] = a[i];
    }
    int min = INF, idx = 0;
    sort(a+1, a+n+1);
    int mid = a[n/2+1];
    int b[n+1];
    for(int i=1;i<=n;i++) {
        if(aa[i] >= mid && cnt <= n/2) b[i] = -1;
        else b[i] = 1;
    }
    int c = 0;
    for(int i=1;i<=n;i++) {
        c += b[i];
        if(min > c) {
            min = c;
            idx = i;
        } 
    }
    if(idx == n) idx = 0;
    ll ans = 0;
    for(int i=n/2+1;i<=n;i++) ans += a[i];
    cout << idx << " " << ans << endl;
}