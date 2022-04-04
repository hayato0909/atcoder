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

int main() {
    int n,l,k;
    cin >> n >> l;
    cin >> k;
    int a[n+1],yokan[n+2];
    a[0] = 0;
    for(int i=1;i<=n;i++) cin >> a[i];

    for(int i=1;i<=n;i++) yokan[i] = a[i] - a[i-1];
    yokan[n+1] = l - a[n];

    int left=-1,right=l+1;
    while(left < right - 1) {
        int mid = (left + right) / 2;
        int cnt = 0, len = 0;
        for(int i=1;i<=n+1;i++) {
            if(len < mid) len += yokan[i];
            else {
                cnt++;
                len = yokan[i];
            }
        }
        if(len >= mid) cnt++;
        if(cnt >= k + 1) left = mid;
        else right = mid;
    }
    cout << left << endl;
    return 0;
}