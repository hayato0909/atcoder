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
    int n; cin >> n;
    map<string, vector<P> > v;
    string s;
    int p;
    for(int i=0;i<n;i++) {
        cin >> s >> p;
        v[s].push_back(P(p, i+1));
    }

    for(map<string, vector<P> > ::iterator i=v.begin();i!=v.end();i++) {
        sort(i->second.begin(), i->second.end());
        for(int j=i->second.size();j>=1;j--) {
            cout << i->second[j-1].second << endl;
        }
    }
}