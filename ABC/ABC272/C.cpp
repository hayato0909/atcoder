#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> e, o;
    int a;
    for(int i=0;i<n;i++) {
        cin >> a;
        if(a % 2 == 0) e.push_back(a);
        else o.push_back(a);
    }
    sort(e.begin(), e.end());
    sort(o.begin(), o.end());
    int E = -1, O = -1;
    if(e.size() >= 2) {
        E = e[e.size()-1] + e[e.size()-2];
    }
    if(o.size() >= 2) {
        O = o[o.size()-1] + o[o.size()-2];
    }
    cout << max(E, O) << endl;
}