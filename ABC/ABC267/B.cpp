#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool v[n+1][n+1];
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=n;j++) {
            v[i][j] = false;
        }
    }
    int u, w;
    for(int i=0;i<m;i++) {
        cin >> u >> w;
        v[u][w] = true;
        v[w][u] = true;
    }

    int ans = 0;
    for(int i=1;i<=n;i++) {
        for(int j=i+1;j<=n;j++) {
            for(int k=j+1;k<=n;k++) {
                if(v[i][j] && v[j][k] && v[k][i]) ans++;
            }
        }
    }
    cout << ans << endl;
}