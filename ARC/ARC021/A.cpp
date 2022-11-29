#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;

int main() {
    int a[4][4];
    rep(i, 0, 4) rep(j, 0, 4) cin >> a[i][j];
    string ans = "GAMEOVER";
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

    rep(x, 0, 4) {
        rep(y, 0, 4) {
            rep(i, 0, 4) {
                int xx = x + dx[i], yy = y + dy[i];
                if(0 <= xx && xx <= 3 && 0 <= yy && yy <= 3) {
                    if(a[x][y] == a[xx][yy]) ans = "CONTINUE";
                }
            }
        }
    }
    cout << ans << endl;
}
