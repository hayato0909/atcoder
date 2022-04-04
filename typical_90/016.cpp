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
    int a[3];
    for(int i=0;i<3;i++) cin >> a[i];
    sort(a, a+3);
    
    int ans = n;
    for(int i=n/a[2];i>=0;i--) {
        int tmp = n - i*a[2];
        for(int j=tmp/a[1];j>=0;j--) {
            if((tmp - j*a[1])%a[0] == 0) {
                ans = min(ans, i+j+(n-i*a[2]-j*a[1])/a[0]);
            }
        }
    }

    cout << ans << endl;
    return 0;
}