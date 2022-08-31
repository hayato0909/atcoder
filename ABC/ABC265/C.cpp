#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w; cin >> h >> w;
    int check[h+1][w+1];
    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) {
            check[i][j] = 0;
        }
    }
    string g[h];
    for(int i=0;i<h;i++) cin >> g[i];

    int x = 1, y = 1;
    check[1][1] = 1;
    while(1) {
        if(g[x-1][y-1] == 'U') {
            if(x != 1) x--;
            else {
                cout << x << " " << y << endl;
                return 0;
            }
        }
        if(g[x-1][y-1] == 'D') {
            if(x != h) x++;
            else {
                cout << x << " " << y << endl;
                return 0;
            }
        }
        if(g[x-1][y-1] == 'L') {
            if(y != 1) y--;
            else {
                cout << x << " " << y << endl;
                return 0;
            }
        }
        if(g[x-1][y-1] == 'R') {
            if(y != w) y++;
            else {
                cout << x << " " << y << endl;
                return 0;
            }
        }
        if(check[x][y] == 1) {
            cout << "-1" << endl;
            return 0;
        } else {
            check[x][y] = 1;
        }
    }
}