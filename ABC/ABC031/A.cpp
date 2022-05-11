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
    int a, d;
    cin >> a >> d;
    int ans = a*(d+1);
    if((a+1)*d < ans) cout << ans << endl;
    else cout << (a+1)*d << endl;
}