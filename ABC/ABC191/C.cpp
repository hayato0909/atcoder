#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;

int main(){
    int h, w; cin >> h >> w;
    string s[h];
    rep(i, 0, h) cin >> s[i];
    int ans = 0;
    rep(x, 0, h-1) {
        rep(y, 0, w-1) {
            int cnt = 0;
            int dx[4] = {0, 1, 0, 1}, dy[4] = {0, 0, 1, 1};
            rep(i, 0, 4) {
                if(s[x+dx[i]][y+dy[i]] == '#') cnt++;
            }
            if(cnt == 1 || cnt == 3) ans++;
        }
    }
    cout << ans << endl;
}