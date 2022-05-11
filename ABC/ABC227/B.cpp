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
    int s[n];
    for(int i=0;i<n;i++) cin >> s[i];
    map<int, int> a;

    for(int i=1;7*i+3 <= 1000;i++) {
        for(int j=1;j<=i;j++) {
            a[4*i*j+3*(i+j)]++;
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++) {
        if(a[s[i]] == 0) ans++;
    }
    cout << ans << endl;    
}