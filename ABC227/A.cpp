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
    int n,k,a;
    cin >> n >> k >> a;

    int ans = (a + k%n - 1);
    if(ans > n) ans -= n;  
    if(ans == 0) ans++;  
    cout << ans << endl;
}