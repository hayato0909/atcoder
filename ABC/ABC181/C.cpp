#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;


int main() {
    int n; cin >> n;
    vector<int> x(n), y(n);
    rep(i, 0, n) cin >> x[i] >> y[i];
    string ans = "No";

    rep(i, 0, n) {
        rep(j, i+1, n) {
            rep(k, j+1, n) {
                if(x[i] == x[j]) {
                    if(x[i] == x[k]) ans = "Yes";
                } else {
                    if(x[i] != x[k]) {
                        if((y[i]-y[j])*(x[i]-x[k]) == (y[i]-y[k])*(x[i]-x[j])) ans = "Yes";
                    }
                }
            }
        }
    }
    cout << ans << endl;
}