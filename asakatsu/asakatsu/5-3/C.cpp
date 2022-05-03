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

int gcd(int a, int b) {
    if(a%b == 0) return b;
    else return gcd(b, a%b);
}

int main() {
    int n; cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    map<int, int> b;

    int now = 1;
    int ans = 0;
    while(b[now] != 1 && now != 2) {
        b[now] = 1;
        now = a[now];
        ans++;
    }
    if(now != 2) ans = -1;
    cout << ans << endl;
}