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
typedef pair<ll, ll> P;

int main() {
    int q;
    cin >> q;
    int mode[q+1];
    ll x[q+1], c[q+1];
    for(int i=1;i<=q;i++) {
        cin >> mode[i];
        if(mode[i] == 1) cin >> x[i] >> c[i];
        else cin >> c[i];
    }

    deque<P> Q;

    for(int i=1;i<=q;i++) {
        if(mode[i] == 1) {
            Q.push_back(P(x[i], c[i]));
        } else {
            ll ans = 0, cnt = 0;
            bool flag = true;
            while(flag) {
                P tmp = Q.front();
                Q.pop_front();
                if(cnt + tmp.second <= c[i]) {
                    ans += tmp.first * tmp.second;
                    cnt += tmp.second;
                    if(cnt == c[i]) {
                        flag = false;
                        cout << ans << endl;
                    }
                } else {
                    ll num = c[i] - cnt;
                    ans += tmp.first * num;
                    Q.push_front(P(tmp.first, tmp.second-num));
                    flag = false;
                    cout << ans << endl;
                }
            }
        }
    }
}
