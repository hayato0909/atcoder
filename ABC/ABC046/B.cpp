#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main(){
    int n, k;
    cin >> n >> k;
    ll ans = k;
    rep(i, 1, n) ans *= k-1;
    cout << ans << endl;
}