#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n, m; cin >> n >> m;
    map<int, int> M;
    for(int i=1;i*i<=1000000;i++) {
        M[i*i] = i;
    }
    queue<P> Q;
    int ans[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) ans[i][j] = -1;
    }
    ans[0][0] = 0;
    Q.push(P(0, 0));
    int r;

    while(!Q.empty()) {
        int x = Q.front().first+1, y = Q.front().second+1;
        Q.pop();
        for(int yy=1;yy<=n;yy++) {
            if((m-(y-yy)*(y-yy)) < 0) continue;
            if((r = M[m-(y-yy)*(y-yy)]) != 0) {
                int xx = x + r;
                if(1 <= xx && xx <= n && ans[xx-1][yy-1] == -1) {
                    ans[xx-1][yy-1] = ans[x-1][y-1] + 1;
                    Q.push(P(xx-1, yy-1));
                }
                xx = x - r;
                if(1 <= xx && xx <= n && ans[xx-1][yy-1] == -1) {
                    ans[xx-1][yy-1] = ans[x-1][y-1] + 1;
                    Q.push(P(xx-1, yy-1));
                }
            } else if(m-(y-yy)*(y-yy) == 0 && ans[x-1][yy-1]==-1) {
                ans[x-1][yy-1] = ans[x-1][y-1] + 1;
                Q.push(P(x-1, yy-1));
            }
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) cout << ans[i][j] << " ";
        cout << endl;
    }
}