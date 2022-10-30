#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;

int main(){
    int h, w, d; cin >> h >> w >> d;
    int a[h+1][w+1];
    vector<P> pos(h*w+1);
    rep(i, 1, h+1) {
        rep(j, 1, w+1) {
            cin >> a[i][j];
            pos[a[i][j]] = P(i, j);
        }
    }
    vector<int> dp(h*w+1);
    rep(i, 1, d+1) {
        int now = i;
        dp[now] = 0;
        while(now + d <= h*w) {
            int next = now + d;
            dp[next] = dp[now] + abs(pos[now].first - pos[next].first) + abs(pos[now].second - pos[next].second);
            now = next;
        }
    }
    int q, l, r; cin >> q;
    rep(cnt, 0, q) {
        cin >> l >> r;
        cout << dp[r] - dp[l] << endl;
    }
}