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

int main(){
    int h,w;
    cin >> h >> w;
    int a[h+1][w+1];
    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) cin >> a[i][j];
    }

    int tate[w+1],yoko[h+1];
    for(int i=1;i<=w;i++) {
        tate[i] = 0;
        for(int j=1;j<=h;j++) tate[i] += a[j][i];
    }
    for(int i=1;i<=h;i++) {
        yoko[i] = 0;
        for(int j=1;j<=w;j++) {
            yoko[i] += a[i][j];
        }
    }

    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) {
            cout << tate[j] + yoko[i] - a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}