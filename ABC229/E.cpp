#include <iostream>
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

class UnionFind
{
public:
    vector<int> par;

    UnionFind(int N) : par(N)
    {
        for (int i = 0; i < N; i++)
            par[i] = i;
    }

    int root(int x)
    {
        if (par[x] == x)
            return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y)
    {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry)
            return;
        par[rx] = ry;
    }

    bool same(int x, int y)
    {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main() {
    int n,m; cin >> n >> m;
    int a[m+1],b[m+1];
    for(int i=1;i<=m;i++) cin >> a[i] >> b[i];
    map<int, vector<int> > g;
    for(int i=1;i<=m;i++) {
        g[a[i]].push_back(b[i]);
    }
    UnionFind uf(n+1);
    int ans[n+2];
    ans[n+1] = 0;
    int cnt = 0;
    cout << endl;

    for(int i=n;i>1;i--) {
        cnt++;
        for(int j:g[i]) {
            if(!uf.same(i, j)) {
                uf.unite(i, j);
                cnt--;
            }
        }
        ans[i] = cnt;
    }

    for(int i=2;i<=n+1;i++) cout << ans[i] << endl;
}