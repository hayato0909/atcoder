#include <bits/stdc++.h>
using namespace std;
#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int h, w; cin >> h >> w;
    vector<string> s(h);
    vector<string> ans(h);
    rep(i, 0, h) cin >> s[i];
    rep(i, 0, h) ans[i] = s[i];
    bool check[h][w];
    rep(i, 0, h) rep(j, 0, w) check[i][j] = false;
    rep(i, 0, h) rep(j, 0, w) if(s[i][j] == '#') check[i][j] = true;

    rep(i, 0, h) {
        rep(j, 0, w) {
            if(s[i][j] == '.') continue;

            bool flag = true;
            for(int k=i-1;k<=i+1;k++) {
                for(int l=j-1;l<=j+1;l++) {
                    if(0 <= k && k < h && 0 <= l && l < w) {
                        if(s[k][l] == '.') flag = false;
                    }
                }
            }
            if(flag) {
                for(int k=i-1;k<=i+1;k++) {
                    for(int l=j-1;l<=j+1;l++) {
                        if(0 <= k && k < h && 0 <= l && l < w) {
                            check[k][l] = false;
                            if(k == i && l == j) ans[k][l] = 'B';
                            else if(ans[k][l] != 'B') ans[k][l] = '.';
                        }
                    }
                }
            }
        }
    }

    rep(i, 0, h) {
        rep(j, 0, w) {
            if(check[i][j]) {
                cout << "impossible" << endl;
                return 0;
            }
        }
    }

    cout << "possible" << endl;
    rep(i, 0, h) rep(j, 0, w) if(ans[i][j]=='B') ans[i][j]= '#';
    rep(i, 0, h) cout << ans[i] << endl;
}