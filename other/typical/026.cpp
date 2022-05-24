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

int n;
int c;
int a[100001],b[100001];
int p[100001];
map<int, vector<int> > g;

void dfs(int point, int color) {
    p[point] = color;
    for(int i : g[point]) {
        if(p[i] == -1) dfs(i, 1-color);
    }
}

int main() {
    cin >> n;
    for(int i=1;i<n;i++) {
        cin >> a[i] >> b[i];
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }
    for(int i=1;i<=n;i++) p[i] = -1;
    dfs(1, 0);

    int cnt = 0;
    for(int i=1;i<=n;i++) if(p[i] == 0) cnt++;

    int check = 0;

    if(cnt >= n/2) {
        for(int i=1;i<=n;i++) {
            if(p[i] == 0) {
                cout << i << " ";
                check++;
            }
            if(check == n/2) {
                cout << endl;
                return 0;
            }
        }
    } else {
        for(int i=1;i<=n;i++) {
            if(p[i] == 1) {
                cout << i << " ";
                check++;
            }
            if(check == n/2) {
                cout << endl;
                return 0;
            }
        }
    }
    cout << endl;
    return 0;
}