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

int gcd(int a, int b) {
    if(a%b == 0) return b;
    else return gcd(b, a%b);
}

int main() {
    int a,b,n;
    cin >> a >> b;
    cin >> n;
    int ans = (a*b)/gcd(a, b);
    for(int i=1;;i++) {
        if(ans * i >= n) {
            ans = ans * i;
            break;
        }
    }
    cout << ans << endl;
}