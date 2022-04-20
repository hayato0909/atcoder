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
    int n, a, b; cin >> n >> a >> b;
    int ans = 0;
    if(n == 1) {
        if(a != b) ans = 0;
        else ans = 1;
    }
    else {
        if(a<=b) {
            ans = (b-a)*(n-2)+1;
        } else ans = 0;
    }
    cout << ans << endl;
}