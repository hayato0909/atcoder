#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; cin >> q;
    multiset<int> st;
    int mode, x, c; 

    for(int i=0;i<q;i++) {
        cin >> mode;
        if(mode == 1) {
            cin >> x;
            st.insert(x);
        } else if(mode == 2) {
            cin >> x >> c; 
            while(c > 0 && st.find(x) != st.end()) {
                st.erase(st.find(x));
                c--;
            }
        } else {
            multiset<int>::iterator i = st.end();
            i--;
            cout << *i - *st.begin() << endl;
        }
    }
}