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
    int a, b; cin >> a >> b;
    int aa = 9 - (a / 100);
    int bb = (b / 100) - 1;
    int c = 100;
    if(aa == 0 && bb == 0) {
        aa = 9 - ((a % 100) / 10);
        bb = ((b % 100) / 10);
        c = 10;
        if(aa == 0 && bb == 0) {
            aa = 9 - (a % 10);
            bb = (b % 10);
            c = 1;
        }
    }
    int ans = 0;
    ans = a - b + c * max(aa, bb);
    cout << ans << endl;
}