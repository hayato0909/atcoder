#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, ll> P;

const ll mod = 1000000007;

int main(){
    int n, x; cin >> n >> x;
    vector<int> p(n);
    rep(i, 0, n) cin >> p[i];
    rep(i, 0, n) {
        if(p[i] == x) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}