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

typedef long long ll;

int main() {
    ll a,b;
    cin >> a >> b;

    while(a>0 && b>0) {
        int x,y;
        x = a % 10;
        y = b % 10;
        if(x + y >= 10) {
            cout << "Hard" << endl;
            return 0;
        }
        a /= 10;
        b /= 10;
    }
    cout << "Easy" << endl;
}