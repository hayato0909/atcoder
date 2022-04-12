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
    int n; cin >> n;
    int l, a;
    set<vector<int> > s;
    for(int i=1;i<=n;i++) {
        vector<int> v;
        cin >> l;
        for(int j=1;j<=l;j++) {
            cin >> a;
            v.push_back(a);
        }
        s.insert(v);
    }

    cout << s.size() << endl;
}