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
    int n, m; cin >> n >> m;
    int x[m], y[m];
    for(int i=0;i<m;i++) cin >> x[i] >> y[i];
    int num[n+1];
    bool ball[n+1];
    for(int i=1;i<=n;i++) {
        num[i] = 1;
        ball[i] = false;
    }
    ball[1] = true;

    for(int i=0;i<m;i++) {
        if(ball[x[i]]) ball[y[i]] = true;
        num[y[i]]++;
        num[x[i]]--;
        if(num[x[i]] == 0) ball[x[i]] = false;
    }

    int ans = 0;
    for(int i=1;i<=n;i++) {
        if(ball[i]) ans++;
    }
    cout << ans << endl;
}