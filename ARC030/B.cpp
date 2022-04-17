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

map<int, vector<int> > g;
int h[101];
int check[101];
int cnt = 0;
int p[101];

int dfs(int pos) {
    check[pos] = 0;
    int ans = h[pos];
    for(int to:g[pos]) {
        if(check[to] == -1) ans += dfs(to);
    }
    if(ans > 0) check[pos] = ans;
    else check[pos] = 0;
    return ans;
}

void dfs2(int pos) {
    p[pos] = 1;
    for(int to:g[pos]) {
        if(p[to] == -1 && check[to] > 0) {
            cnt++;
            dfs2(to);
        }
    }
}

int main() {
    int n, x; cin >> n >> x;
    for(int i=1;i<=n;i++) cin >> h[i];
    for(int i=1;i<=n-1;i++) {
        int a,b; cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(int i=1;i<=n;i++) {
        check[i] = -1;
    }
    dfs(x);

    for(int i=1;i<=n;i++) p[i] = -1;
    dfs2(x);
    cout << 2*cnt << endl;
}