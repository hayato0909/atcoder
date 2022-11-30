#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 998244353;

int main() {
    int n; cin >> n;
    string a[n];
    rep(i, 0, n) cin >> a[i];
    ll ans = 0ll;
    int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1}, dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    rep(x, 0, n) {
        rep(y, 0, n) {
            rep(i, 0, 8) {
                string tmp = "";
                tmp += a[x][y];
                int xx = x, yy = y;
                rep(j, 1, n) {
                    xx += dx[i];
                    yy += dy[i];
                    if(xx >= n) xx -= n;
                    if(xx < 0) xx += n;
                    if(yy >= n) yy -= n;
                    if(yy < 0) yy += n;
                    tmp += a[xx][yy];
                }
                ans = max(ans, stoll(tmp));
            }
        }
    }
    cout << ans << endl;
}
