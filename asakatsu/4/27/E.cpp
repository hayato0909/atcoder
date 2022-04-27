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
    int l; cin >> l;
    int b[l];
    for(int i=0;i<l;i++) cin >> b[i];
    int a[l];
    a[0] = 0;
    int now = 0;

    for(int i=1;i<l;i++) {
        now ^= b[i-1];
        a[i] = (a[0] ^ now);
    }
    if((a[l-1] ^ a[0]) == b[l-1]) {
        for(int i=0;i<l;i++) cout << a[i] << endl;
    } else cout << "-1" << endl;
}