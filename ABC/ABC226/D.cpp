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

bool line(int x1, int y1, int x2, int y2, int x3, int y3) {
    if(x1 - x2 != 0 && y2 - y1 != 0) {
        if((x3 - x1) / (x2 - x1) == (y3 - y1) / (y2 - y1)) return true;
        else return false;
    } else if(x1 - x2 == 0) {
        if(x3 == x1) return true;
        else return false;
    } else {
        if(y3 == y1) return true;
        else return false;
    }
}

int main() {
    int n; cin >> n;
    double x[n], y[n];
    for(int i=0;i<n;i++) cin >> x[i] >> y[i];
    map<double, int> check;
    int inf = 0;
    int ans = 0;

    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(x[i] - x[j] != 0) {
                if(check[(y[i] - y[j])/(x[i] - x[j])] == 0) {
                    check[(y[i] - y[j])/(x[i] - x[j])]++;
                    ans++;
                }
            } else inf++;
        }
    }
    if(inf > 0) ans++;
    cout << ans * 2 << endl;
}