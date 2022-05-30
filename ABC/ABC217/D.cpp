#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, q; cin >> l >> q;
    int c,x;
    vector<int> v;
    v.push_back(0);
    v.push_back(l);
    for(int i=0;i<q;i++) {
        cin >> c >> x;
        int idx = lower_bound(v.begin(), v.end(), x) - v.begin();
        if(c == 1) {
            v.insert(v.begin()+idx, x);
        } else {
            cout << v[idx] - v[idx-1] << endl;
        }
    }
}