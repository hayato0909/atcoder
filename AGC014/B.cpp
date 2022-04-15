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
    int n, m;
    cin >> n >> m;
    int a[m], b[m];
    for(int i=0;i<m;i++) cin >> a[i] >> b[i];
    map<int, int> num;
    for(int i=0;i<m;i++) {
        num[a[i]]++;
        num[b[i]]++;
    }

    string ans = "YES";
    for(int i=1;i<=n;i++) {
        if(num[i] % 2 == 1) ans = "NO";
    }
    cout << ans << endl;
}