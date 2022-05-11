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
    int n,m,x;
    cin >> n >> m >> x;
    int c[n+1], a[n+1][m+1];
    for(int i=1;i<=n;i++) {
        cin >> c[i];
        for(int j=1;j<=m;j++) cin >> a[i][j];
    }

    int ans = 100000000;
    for(int bit=0;bit<(1<<n);bit++) {
        int money=0, b[m+1];
        for(int i=1;i<=m;i++) b[i]=0;
        for(int i=0;i<n;i++) {
            if(bit & (1<<i)) {
                money += c[i+1];
                for(int j=1;j<=m;j++) b[j] += a[i+1][j];
            }
        }
        bool flag = true;
        for(int i=1;i<=m;i++) {
            if(b[i] < x) flag = false;
        }
        if(flag) ans = min(ans, money);
    }

    if(ans == 100000000) ans = -1;
    cout << ans << endl;
}