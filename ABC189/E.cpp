#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    int x[n+1], y[n+1];
    for(int i=1;i<=n;i++) cin >> x[i] >> y[i];
    int m; cin >> m;
    int mode[m+1], p[m+1];
    for(int i=1;i<=m;i++) {
        cin >> mode[i];
        if(mode[i] == 3 || mode[i] == 4) cin >> p[i];
    }
    int q; cin >> q;
    int a[q], b[q];
    for(int i=1;i<=q;i++) cin >> a[i] >> b[i];

    ll line[m+1][3][3];
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(i==j) line[0][i][j] = 1;
            else line[0][i][j] = 0;
        }
    }
    for(int i=1;i<=m;i++) {
        ll tmp[3][3];
        for(int j=0;j<3;j++) {
            for(int k=0;k<3;k++) tmp[j][k] = 0;
        }
        if(mode[i] == 1) {
            tmp[0][1] = 1;
            tmp[1][0] = -1;
            tmp[2][2] = 1;
        } else if(mode[i] == 2) {
            tmp[0][1] = -1;
            tmp[1][0] = 1;
            tmp[2][2] = 1;
        } else if(mode[i] == 3) {
            tmp[0][0] = -1;
            tmp[0][2] = 2*p[i];
            tmp[1][1] = 1;
            tmp[2][2] = 1;
        } else {
            tmp[0][0] = 1;
            tmp[1][2] = 2*p[i];
            tmp[1][1] = -1;
            tmp[2][2] = 1;
        }
        for(int j=0;j<3;j++) {
            for(int k=0;k<3;k++) {
                line[i][j][k] = 0;
                for(int l=0;l<3;l++) line[i][j][k] += tmp[j][l]*line[i-1][l][k];
            }
        }
    }

    for(int i=1;i<=q;i++) {
        ll X = line[a[i]][0][0]*x[b[i]] + line[a[i]][0][1]*y[b[i]] + line[a[i]][0][2];
        ll Y = line[a[i]][1][0]*x[b[i]] + line[a[i]][1][1]*y[b[i]] + line[a[i]][1][2];
        cout << X << " " << Y << endl;;
    }
}