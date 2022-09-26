#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

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

bool uni(int x1, int y1, int x2, int y2) {
    bool ans = false;
    if(x1 == x2-1 && y1 == y2-1) ans = true;
    if(x1 == x2-1 && y1 == y2) ans = true;
    if(x1 == x2 && y1 == y2-1) ans = true;
    if(x1 == x2 && y1 == y2+1) ans = true;
    if(x1 == x2+1 && y1 == y2) ans = true;
    if(x1 == x2+1 && y1 == y2+1) ans = true;
    return ans;
}

int main() {
    int n; cin >> n;
    int x[n], y[n];
    for(int i=0;i<n;i++) cin >> x[i] >> y[i];
    UnionFind uf(n);
    
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(uni(x[i], y[i], x[j], y[j])) uf.unite(i, j);
        }
    }

    int check[n];
    for(int i=0;i<n;i++) check[i] = -1;
    int ans = 0;
    for(int i=0;i<n;i++) {
        if(check[i] == -1) {
            ans++;
            check[i] = 1;
            for(int j=i+1;j<n;j++) {
                if(uf.same(i, j)) check[j] = 1;
            }
        }
    }
    cout << ans << endl;
}