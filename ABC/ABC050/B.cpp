#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;

int main(){
    int n; cin >> n;
    vector<int> t(n);
    rep(i, 0, n) cin >> t[i];
    int m; cin >> m;
    vector<int> p(m), x(m);
    rep(i, 0, m) cin >> p[i] >> x[i];
    int sum = 0;
    rep(i, 0, n) sum += t[i];

    rep(i, 0, m) {
        cout << sum - (t[p[i]-1]-x[i]) << endl;
    }
}