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

const int mod = 10007;

int main() {
    int n; cin >> n;
    int a[n+1];
    a[1] = 0;
    a[2] = 0;
    a[3] = 1;
    for(int i=4;i<=n;i++) a[i] = (a[i-1] + a[i-2] + a[i-3])%mod;
    cout << a[n] << endl;
}