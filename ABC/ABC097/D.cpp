#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)
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


int main(){
    int n, m; cin >> n >> m;
    vector<int> x(m), y(m);
    vector<int> p(n);
    rep(i, 0, n) cin >> p[i];
    rep(i, 0, m) cin >> x[i] >> y[i];

    int idx[n+1];
    rep(i, 0, n) idx[p[i]] = i + 1;
    UnionFind uf(n+1);
    rep(i, 0, m) uf.unite(x[i], y[i]);

    int ans = 0;
    rep(i, 1, n+1) {
        int pos = idx[i];
        if(uf.same(pos, i)) ans++;
    }
    cout << ans << endl;
}