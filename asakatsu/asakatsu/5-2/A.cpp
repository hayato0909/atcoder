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
    int ans;
    if(n % 2 == 0) ans = n - 1;
    else ans = n + 1;
    cout << ans << endl;
}