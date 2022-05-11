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
    int n,q; cin >> n >> q;
    int a[n+1], w[n+1];
    for(int i=1;i<=n;i++) {
        a[i] = i;
        w[i] = i;
    }
    for(int i=0;i<q;i++) {
        int x; cin >> x;
        int pos = w[x];
        if(pos < n) {
            int num = a[pos+1];
            a[pos] = num;
            w[num] = pos;
            a[pos+1] = x;
            w[x] = pos+1;
        } else {
            int num = a[pos-1];
            a[pos] = num;
            w[num] = pos;
            a[pos-1] = x;
            w[x] = pos-1;
        }
    }
    for(int i=1;i<=n;i++) cout << a[i] << " ";
    cout << endl;
}