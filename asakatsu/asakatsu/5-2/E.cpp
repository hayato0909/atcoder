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
    int n; cin >> n;
    vector<int> a, b;
    int aa, bb;
    for(int i=0;i<n;i++) {
        cin >> aa >> bb;
        a.push_back(aa);
        b.push_back(bb);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int tmp1, tmp2;
    if(n % 2 == 0) {
        bool flag1=false, flag2=false;
        tmp1 = (a[(n-1)/2] + a[n/2]) / 2;
        if((a[(n-1)/2] + a[n/2]) % 2 == 0) flag1 = true;
        tmp2 = (b[(n-1)/2] + a[n/2]) / 2;
        if((b[(n-1)/2] + b[n/2])%2 == 0) flag2 = true;
        int ans = (tmp2 - tmp1 + 1) * 2;
        if(!flag1) ans--;
        if(flag2) ans--;
        cout << ans << endl;
    } else {
        tmp1 = a[n/2];
        tmp2 = b[n/2];
        int ans = tmp2 - tmp1 + 1;
        cout << ans << endl;
    }
}