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
    ll x; cin >> x;
    for(ll i=-120;i<=120;i++) {
        for(ll j=-120;j<=120;j++) {
            if(i*i*i*i*i - j*j*j*j*j == x) {
                cout << i << " " << j << endl;;
                return 0;
            }
        }
    }
}