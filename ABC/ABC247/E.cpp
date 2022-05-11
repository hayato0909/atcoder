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

int main() {
    int n,x,y;
    cin >> n >> x >> y;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];

    ll ans = 0;
    int max = -1, min = -1;
    int check = 0;
    for(int i=1;i<=n;i++) {
        if(a[i] == x) max = i;
        if(a[i] == y) min = i;
        if(a[i] > x || a[i] < y) {
            max = -1;
            min = -1;
            check = i;
        }

        if(min != -1 && max != -1) {
            if(max < min) ans += max - check;
            else ans += min - check;
        }
    }
    cout << ans << endl;
}