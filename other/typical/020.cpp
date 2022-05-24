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
    long long a,b,c;
    cin >> a >> b >> c;
    long long tmp = 1;

    for(int i=1;i<=b;i++) {
        tmp = tmp * c;
        if(a < tmp) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}