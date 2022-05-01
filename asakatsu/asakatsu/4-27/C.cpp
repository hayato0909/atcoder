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

typedef long long ll;

int main() {
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    ll ans = 0;
    while((double)a*x<1000000000000000000 && a*x <= x+b && a*x < y) {
        x = a*x;
        ans++;
    }
    ans = ans + (y-x-1)/b;
    cout << ans << endl;
}