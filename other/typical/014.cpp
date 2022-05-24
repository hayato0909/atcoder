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
    int n;
    cin >> n;
    long long a[n+1],b[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++) cin >> b[i];

    sort(a+1, a+n+1);
    sort(b+1, b+n+1);

    long long ans = 0;
    for(int i=1;i<=n;i++) {
        ans += abs(a[i] - b[i]);
    }

    cout << ans << endl;
}