#include <bits/stdc++.h>
using namespace std;
#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

ll const mod = 998244353;

int main() {
    int h, w; cin >> h >> w;
    vector<string> s(h);
    vector<bool> red(h+w), blue(h+w);
    rep(i, 0, h+w) red[i] = false, blue[i] = false;
    rep(i, 0, h) cin >> s[i];
    ll ans = 1;
    rep(i, 0, h) {
        rep(j, 0, w) {
            if(s[i][j] == 'R') red[i+j] = true;
            else if(s[i][j] == 'B') blue[i+j] = true;
        }
    }

    rep(i, 0, h+w-1) {
        if(red[i] && blue[i]) ans *= 0;
        else if(!red[i] && !blue[i]) ans = (ans * 2) % mod;
    }
    cout << ans << endl;
}