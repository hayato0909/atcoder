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
    int n,l; cin >> n >>l;
    vector<string> a;
    for(int i=0;i<n;i++) {
        string s; cin >> s;
        a.push_back(s);
    }
    sort(a.begin(), a.end());
    for(int i=0;i<n;i++) cout << a[i];
    cout << endl;
}