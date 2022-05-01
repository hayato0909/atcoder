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

typedef pair<int, int> P;

int main() {
    int b[10];
    for(int i=0;i<=9;i++) cin >> b[i];
    int big[10];
    for(int i=0;i<10;i++) big[b[i]] = i;
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    vector<P> aa;
    for(int i=0;i<n;i++) {
        int tmp = 0;
        int num = a[i];
        int len = 1;
        while(num >= len) len *= 10;
        len /= 10;
        for(int j=len;j>=1;j/=10) {
            tmp = tmp*10 + big[num/j];
            num = num % j;
        }
        aa.push_back(P(tmp, i));
    }
    sort(aa.begin(), aa.end());

    for(int i=0;i<n;i++) {
        int idx = aa[i].second;
        cout << a[idx] << endl;
    }
}