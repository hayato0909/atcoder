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

int main() {
    int h,w;
    cin >> h >> w;

    if(h == 1) cout << w << endl;
    else if(w == 1) cout << h << endl;
    else cout << (h/2 + h%2) * (w/2 + w%2) << endl;
    return 0;
}