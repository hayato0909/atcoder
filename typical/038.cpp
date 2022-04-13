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
const ll M = 1000000000000000000;

ll gcd(ll a, ll b) {
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main() {
    ll a,b;
    cin >> a >> b;
    if(a < b) {
        ll tmp = a;
        a = b;
        b = tmp;
    }
    ll tmp = a / gcd(a, b);
    if(b <= M/tmp) cout << b * tmp << endl;
    else cout << "Large" << endl;
}