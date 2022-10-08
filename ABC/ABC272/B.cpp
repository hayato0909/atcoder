#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    int m; cin >> m;
    int check[n+1][n+1];
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=n;j++) check[i][j] = 0;
    }
    for(int i=0;i<m;i++) {
        int k; cin >> k;
        int x[k+1];
        for(int j=1;j<=k;j++) {
            cin >> x[j];
        }
        for(int j=1;j<k;j++) {
            for(int l=j+1;l<=k;l++) {
                check[x[j]][x[l]] = 1;
                check[x[l]][x[j]] = 1;
            }
        }
    }
    string ans = "Yes";
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i == j) continue;
            if(check[i][j] == 0) ans = "No";
        }
    }
    cout << ans << endl;
}