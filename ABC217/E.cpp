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
    vector<int> a;
    priority_queue<int, vector<int>, greater<int> > que;
    int q; cin >> q;
    int l = 0;

    for(int i=0;i<q;i++) {
        int mode; cin >> mode;
        if(mode == 1) {
            int x; cin >> x;
            a.push_back(x);
        } else if(mode == 2) {
            if(que.size() != 0) {
                cout << que.top() << endl;
                que.pop();
            } else {
                cout << a[l] << endl;
                l++;
            }
        } else {
            for(;l<a.size();l++) {
                que.push(a[l]);
            }
        }
    }
}