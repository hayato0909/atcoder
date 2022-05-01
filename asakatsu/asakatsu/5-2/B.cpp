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
    map<string, int> a;
    string s;
    for(int i=0;i<n;i++)  {
        cin >> s;
        a[s]++;
    }
    int ans = 0;
    for(map<string, int>::iterator i=a.begin();i!=a.end();i++) {
        ans = max(ans, i->second);
    }
    for(map<string, int>::iterator i=a.begin();i!=a.end();i++) {
        if(ans == i->second) cout << i->first << endl;
    }
}