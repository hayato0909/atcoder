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
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];

    int left = 1, right = n;
    int flag = 0;
    while(left < right) {
        if(a[left] == 1 - flag && a[right] == 1 - flag) {
            cout << "No" << endl;
            return 0;
        }
        if(a[right] == 0 + flag) {
            while(right >= 1 && a[right] == 0 + flag && left < right) right--;
        } else {
            left++;
            flag = 1 - flag;
        }
    }

    if(left == right && a[left] == 0 + flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}