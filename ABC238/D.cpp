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
    ll t;
    cin >> t;
    for(ll i=0;i<t;i++) {
        ll a,s;
        cin >> a >> s;
        bool flag = false;
        if(2*a <= s) {
            ll tmp = s - 2*a;
            if((tmp & a) == 0) flag = true;
        }
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}