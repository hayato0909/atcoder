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
    int w; cin >> w;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    int m[w+1];
    for(int i=1;i<=w;i++) m[i] = 0;
    for(int i=1;i<=n;i++) m[a[i]]++;
    for(int i=1;i<n;i++) {
        for(int j=i+1;j<=n;j++) {
            if(a[i]+a[j] <= w) m[a[i]+a[j]]++;
            for(int k=j+1;k<=n;k++) {
                if(a[i]+a[j]+a[k]<=w) m[a[i]+a[j]+a[k]]++;
            }
        }
    }
    int ans = 0;
    for(int i=1;i<=w;i++) {
        if(m[i] > 0) ans++;
    }
    cout << ans << endl;
}