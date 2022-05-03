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

int main() {
    int n;  cin >> n;
    int ans = 0;
    for(int i=1;i<=3;i++) {
        if(n%10 == 1) ans++;
        n = n / 10;
    }
    cout << ans << endl;
}