#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 998244353;

int main() {
    int h, w; cin >> h >> w;
    string s[h];
    rep(i, 0, h) cin >> s[i];
    int ans = 0;
    rep(i, 0, h) {
        rep(j, 0, w) {
            if(s[i][j] == '#') ans++;
        }
    }
    cout << ans << endl;
}