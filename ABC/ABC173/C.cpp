#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;


int main() {
    int h, w, k; cin >> h >> w >> k;
    vector<string> c(h), tmp(h);
    rep(i, 0, h) cin >> c[i];
    int ans = 0;

    for(int bith=0;bith<(1 << h);bith++) {
        for(int bitw=0;bitw<(1<<w);bitw++) {
            rep(i, 0, h) tmp[i] = c[i];
            for(int i=0;i<h;i++) {
                if(bith & (1 << i)) {
                    rep(j, 0, w) tmp[i][j] = 'R';
                }
            }
            for(int i=0;i<w;i++) {
                if(bitw & (1 << i)) {
                    rep(j, 0, h) tmp[j][i] = 'R';
                }
            }
            int num = 0;
            rep(i, 0, h) rep(j, 0, w) if(tmp[i][j] == '#') num++;
            if(num == k) ans++;
        }
    }
    cout << ans << endl;
}