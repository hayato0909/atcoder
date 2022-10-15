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
    int rs, cs; cin >> rs >> cs;
    int n; cin >> n;
    vector<P> tate, yoko;
    int r, c;
    rep(i, 0, n) {
        cin >> r >> c;
        yoko.push_back(P(r, c));
        tate.push_back(P(c, r));
    }
    sort(tate.begin(), tate.end());
    sort(yoko.begin(), yoko.end());
    int q; cin >> q;
    int x = rs, y = cs;
    rep(ii, 0, q) {
        char d; cin >> d;
        int l; cin >> l;
        if(d == 'U') {
            int idx = lower_bound(tate.begin(), tate.end(), P(y, x)) - tate.begin();
            if(idx > 0 && y == tate[idx-1].first) {
                x = max(tate[idx-1].second+1, x-l);
                x = max(x, 1);
            } else {
                x = max(x-l, 1);
            }
        } else if(d == 'D') {
            int idx = lower_bound(tate.begin(), tate.end(), P(y, x)) - tate.begin();
            if(idx < n && tate[idx].first == y) {
                x = min(x+l, tate[idx].second-1);
                x = min(x, h);
            } else {
                x = min(x+l, h);
            }
        } else if(d == 'L') {
            int idx = lower_bound(yoko.begin(), yoko.end(), P(x, y)) - yoko.begin();
            if(idx > 0 && yoko[idx-1].first == x) {
                y = max(yoko[idx-1].second+1, y-l);
                y = max(y, 1);
            } else {
                y = max(1, y-l);
            }
        } else {
            int idx = lower_bound(yoko.begin(), yoko.end(), P(x, y)) - yoko.begin();
            if(idx < n && yoko[idx].first == x) {
                y = min(yoko[idx].second-1, y+l);
                y = min(y, w);
            } else {
                y = min(y+l, w);
            }
        }
        cout << x << " " << y << endl;
    }
}
