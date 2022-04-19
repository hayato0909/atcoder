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
    int n,k;
    cin >> n >> k;
    int x[n+1];
    for(int i=1;i<=n;i++) cin >> x[i];
    int mid = 1;
    while(mid>=0 && x[mid] < 0) mid++;

    int r, l;
    if(n - mid + 1 >= k) {
        l = mid;
        r = mid + k - 1;
    } else {
        r = n;
        l = n - k + 1;
    }

    int ans = 1000000000;
    while(l >= 1 && r >= mid - 1) {
        int tmp1 = x[l], tmp2 = x[r];
        if(tmp1>0 && tmp2>0) ans = min(ans, tmp2);
        else if(tmp1<0 && tmp2<0) ans = min(ans, -tmp1);
        else {
            int tmp = min(-tmp1, tmp2) * 2 + max(-tmp1, tmp2);
            ans = min(ans, tmp);
        }
        l--;
        r--;
    }
    cout << ans << endl;
}