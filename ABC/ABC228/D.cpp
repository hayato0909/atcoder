#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<string, int> P;


const ll mod = 1000000007;

int main(){
    int q; cin >> q;
    ll n = 1 << 20;
    vector<ll> v(n, -1);
    set<ll> idx;
    rep(i, 0, n) idx.insert(i);
    rep(i, 0, q) {
        ll t;
        ll x;
        cin >> t >> x;
        if(t == 1) {
            if(v[x%n] == -1) {
                v[x%n] = x;
                idx.erase(x%n);
            } else {
                auto iter = idx.lower_bound(x % n);
                ll pos;
                if(iter == idx.end()) pos = *idx.begin();
                else pos = *iter;
                v[pos] = x;
                idx.erase(pos);
            }
        } else {
            cout << v[x%n] << endl;
        }
    }
}