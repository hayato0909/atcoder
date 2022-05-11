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
ll c,d;


ll gcd(ll a, ll b) {
    if(b == 0) return a;
    else return gcd(b, a%b);
}

ll cnt(ll n) {
    ll g = gcd(c, d);
    ll l = c / g * d;
    return n - n/c - n/d + n/l;
}

int main() {
    ll a,b;
    cin >> a >> b >> c >> d;
    cout << cnt(b) - cnt(a-1) << endl;
}
