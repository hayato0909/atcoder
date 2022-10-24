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
    int n, x, y; cin >> n >> x >> y;
    int a[n+1];
    rep(i, 1, n+1) cin >> a[i];
    int num[n+1][20*n + 1];
    rep(i, 0, n+1) rep(j, 0, 20*n[+]1) num[i][j] = 0;
    num[1][a[1]+10*n] = 1;
    int fin;
    for(int i=2;2*i-1<=n;i++) {
        rep(j, 0, 20*n+1) {
            num[i][j] = 0;
            if(j-10*n-a[2*i-1]>=-10*n) num[i][j] = max(num[i][j], num[i-1][j-10*n-a[2*i-1]+10*n]);
            if(j-10*n+a[2*i-1]<=10*n) num[i][j] = max(num[i][j], num[i-1][j-10*n+a[2*i-1]+10*n]);
        }
        fin = i;
    }
    if(num[fin][x+10*n] == 0) {
        cout << "No" << endl;
        return 0;
    }

    rep(i, 0, n+1) rep(j, 0, 20*n+1) num[i][j] = 0;
    num[0][10*n] = 1;
    for(int i=1;2*i<=n;i++) {
        rep(j, 0, 20*n+1) {
            num[i][j] = 0;
            if(j-10*n-a[2*i]>=-10*n) num[i][j] = max(num[i][j], num[i-1][j-10*n-a[2*i]+10*n]);
            if(j-10*n+a[2*i]<=10*n) num[i][j] = max(num[i][j], num[i-1][j-10*n+a[2*i]+10*n]);
        }
        fin = i;
    }
    if(num[fin][y+10*n] == 0) cout << "No" << endl;
    else cout << "Yes" << endl;
}