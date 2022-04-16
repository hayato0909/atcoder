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
    long long a,b,k;
    cin >> a >> b >> k;
    int cnt = 0;
    while(a < b) {
        a = a * k;
        cnt++;
    }
    cout << cnt << endl;
}