#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; cin >> q;
    map<int, int> m;
    int mode,x,c;
    vector<int> v;

    for(int i=0;i<q;i++) {
        cin >> mode;
        if(mode == 1) {
            cin >> x;
            if(m[x] == 0) {
                int idx = lower_bound(v.begin(), v.end(), x) -  v.begin();
                if(idx < v.size()) v.insert(v.begin()+idx, x);
                else v.push_back(x);
            }
            m[x]++;
        } else if(mode == 2) {
            cin >> x >> c;
            if(m[x] > c) m[x] -= c; 
            else {
                if(m[x] != 0) {
                    int idx = lower_bound(v.begin(), v.end(), x) - v.begin();
                    v.erase(v.begin()+idx);
                }
                m[x] = 0;
            }
        } else {
            cout << v[v.size()-1] - v[0] << endl;
        }
    }
}