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
    int c[n+1],p[n+1];
    for(int i=1;i<=n;i++) cin >> c[i] >> p[i];
    int q; cin >> q;
    int l[q+1],r[q+1];
    for(int i=1;i<=q;i++) cin >> l[i] >> r[i];

    int sum1[n+1],sum2[n+1];
    sum1[0] = 0;
    sum2[0] = 0;
    for(int i=1;i<=n;i++) {
        if(c[i] == 1) {
            sum1[i] = sum1[i-1] + p[i];
            sum2[i] = sum2[i-1];
        } else {
            sum1[i] = sum1[i-1];
            sum2[i] = sum2[i-1] + p[i];
        }
    }

    for(int i=1;i<=q;i++) {
        cout << sum1[r[i]] - sum1[l[i]-1] << " " << sum2[r[i]] - sum2[l[i]-1] << endl;
    }

    return 0;
}