#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;

typedef long long ll;
typedef pair<int, int> P;

int main(){
    int h, w; cin >> h >> w;
    string c[h];
    rep(i, 0, h) cin >> c[i];
    vector<int> ans(w, 0);

    rep(i, 0, h) {
        rep(j, 0, w) {
            if(c[i][j] == '#') ans[j]++;
        }
    }
    rep(i, 0, w) cout << ans[i] << " ";
    cout << endl;
}