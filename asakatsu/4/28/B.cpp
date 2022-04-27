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
    int h, m, s;
    h = n / 3600;
    n = n % 3600;
    m = n / 60;
    s = n % 60;

    if(h < 10) cout << "0";
    cout << h << ":";
    if(m < 10) cout << "0";
    cout << m << ":";
    if(s < 10) cout << "0";
    cout << s << endl;
}