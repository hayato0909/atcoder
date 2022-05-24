#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, int> P;

int main() {
    ll q,l; cin >> q >> l;
    string s;
    ll n,m;
    ll num = 0;
    bool flag = false;
    deque<P> Q;

    for(int i=0;i<q;i++) {
        cin >> s;
        if(s == "Push") {
            cin >> n >> m;
            if(flag) continue;
            if(n + num > l) {
                cout << "FULL" << endl;
                flag = true;
            } else {
                Q.push_back(P(m, n));
                num += n;
            }
        } else if(s == "Pop") {
            cin >> n;
            if(flag) continue;
            if(num < n) {
                cout << "EMPTY" << endl;
                flag = true;
            } else {
                ll cnt = 0;
                while(cnt != n) {
                    P now = Q.back();
                    Q.pop_back();
                    if(cnt + now.second <= n) {
                        num -= now.second;
                        cnt += now.second;
                    } else {
                        num -= n - cnt;
                        Q.push_back(P(now.first, now.second-(n-cnt)));
                        cnt = n;
                    }
                }
            }
        } else if(s == "Top") {
            if(flag) continue;
            if(num == 0) {
                cout << "EMPTY" << endl;
                flag = true;
            } else {
                P now = Q.back();
                cout << now.first << endl;
            }
        } else {
            if(flag) continue;
            cout << num << endl;
        }
    }
    if(!flag) cout << "SAFE" << endl;
}