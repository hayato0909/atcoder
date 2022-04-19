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
    int n,m;
    cin >> n >> m;
    int h[n+1];
    for(int i=1;i<=n;i++) cin >> h[i];
    int M[n+1];
    for(int i=1;i<=n;i++) M[i] = 0;
    int a[m+1],b[m+1];
    for(int i=1;i<=m;i++) {
        cin >> a[i] >> b[i];
        M[a[i]] = max(M[a[i]], h[b[i]]);
        M[b[i]] = max(M[b[i]], h[a[i]]);
    }

    int ans = 0;
    for(int i=1;i<=n;i++) {
        if(M[i] < h[i]) ans++;
    }
    cout << ans << endl;
}