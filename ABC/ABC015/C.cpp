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

int n, k;
int t[6][6];

bool dfs(int pos, int num) {
    if(pos == n+1) return (num == 0);
    for(int i=1;i<=k;i++) {
        if(dfs(pos+1, num^t[pos][i])) return true;
    }
    return false;
}

int main() {
    cin >> n >> k;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=k;j++) cin >> t[i][j];
    }

    if(dfs(1, 0)) cout << "Found" << endl;
    else cout << "Nothing" << endl;
}