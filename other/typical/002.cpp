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
    int n;
    cin >> n;

    for(int bit=0;bit<(1<<n);bit++) {
        int cnt = 0,flag = 1;
        for(int i=n-1;i>=0;i--) {
            if(bit & (1<<i)) cnt--;
            else cnt++;
            if(cnt < 0) flag = 0;
        }
        if(cnt == 0 && flag == 1) {
            for(int i=n-1;i>=0;i--) {
                if(bit & (1<<i)) cout << ")";
                else cout << "(";
            }
            cout << endl;
        }
    }

    return 0;
}