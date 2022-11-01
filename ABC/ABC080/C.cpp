#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;


const ll mod = 1000000007;

int main() {
    int n; cin >> n;
    int f[n+1][10];
    rep(i, 1, n+1) rep(j, 0, 10) cin >> f[i][j];
    int p[n+1][11];
    rep(i, 1, n+1) rep(j, 0, 11) cin >> p[i][j];
    int ans = -2000000000;

    for(int bit=1;bit<(1<<10);bit++) {
        int tmp = 0;
        for(int i=1;i<=n;i++) {
            int cnt = 0;
            for(int j=0;j<10;j++) {
                if((bit & (1<<j)) != 0 && f[i][j] == 1) cnt++;
            }
            tmp += p[i][cnt];
        }
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}