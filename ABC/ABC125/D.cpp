#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;

int main(){
    int n; cin >> n;
    vector<ll> a(n+1);
    rep(i, 1, n+1) cin >> a[i];
    ll dp[n+1][2];
    dp[1][0] = a[1];
    dp[1][1] = -a[1];

    rep(i, 2, n+1) {
        dp[i][0] = max(dp[i-1][0]+a[i], dp[i-1][1]-a[i]);
        dp[i][1] = max(dp[i-1][0]-a[i], dp[i-1][1]+a[i]);
    }
    //rep(i, 1, n+1) cout << dp[i][0] << " " << dp[i][1] << endl;
    cout << dp[n][0] << endl;
}