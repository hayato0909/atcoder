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
    int w; cin >> w;
    vector<int> ans;
    int ten = 1;
    while(ten != 1000000) {
        for(int i=1;i<=99;i++) {
            ans.push_back(i*ten);
        }
        ten *= 100;
    }
    cout << ans.size() << endl;
    for(int i:ans) cout << i << " ";
    cout << endl;
}