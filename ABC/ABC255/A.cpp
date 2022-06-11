#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,c; cin >> r >> c;
    int a[3][3];
    for(int i=1;i<=2;i++) {
        for(int j=1;j<=2;j++) cin >> a[i][j];
    }
    cout << a[r][c] << endl;
}