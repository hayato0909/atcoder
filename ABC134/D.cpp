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
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    int b[n+1];
    
    for(int i=n;i>=2;i--) {
        int cnt = 0;
        for(int j=i*2;j<=n;j+=i) {
            if(b[j] == 1) cnt++;
        }
        cnt = cnt % 2;
        if(a[i] == cnt) b[i] = 0;
        else b[i] = 1;
    }
    int ans = 0;
    for(int i=2;i<=n;i++) {
        if(b[i]) ans++;
    }
    if(ans%2 == a[1]) b[1] = 0;
    else {
        b[1] = 1;
        ans++;
    }

    cout << ans << endl;
    for(int i=1;i<=n;i++) {
        if(b[i]) cout << i << " ";
    }
    cout << endl;
}