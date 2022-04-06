#include <iostream>
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

typedef long long ll;
const ll INF = 1000000000000000001;

int main() {
    int q; cin >> q;
    multiset<ll> a;
    a.insert(-1);
    a.insert(INF);
    
    for(int i=0;i<q;i++) {
        int mode; cin >> mode;
        if(mode == 1) {
            ll x; cin >> x;
            a.insert(x);
        } else if(mode == 2) {
            ll x,k; cin >> x >> k;
            multiset<ll>::iterator iter = a.upper_bound(x);
            for(int i=0;i<k;i++) {
                if(*iter == -1) break;
                iter--;
            }
            cout << *iter << endl;
        } else if (mode == 3) {
            ll x,k; cin >> x >> k;
            multiset<ll>::iterator iter = a.lower_bound(x);
            for(int i=1;i<k;i++) {
                if(*iter == INF) break;
                iter++;
            }
            if(*iter != INF) cout << *iter << endl;
            else cout << "-1" << endl;
        }
    }
}