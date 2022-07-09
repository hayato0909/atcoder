#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

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
    int n; cin >> n;
    ll sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    ll x[n+1], y[n+1], r[n+1];
    for(int i=1;i<=n;i++) cin >> x[i] >> y[i] >> r[i];
    UnionFind uf(n+1);

    for(int i=1;i<n;i++) {
        for(int j=i+1;j<=n;j++) {
            if(abs(r[i]-r[j])*abs(r[i]-r[j]) <= (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]) && (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]) <= (r[i]+r[j])*(r[i]+r[j])) {
                uf.unite(i, j);
                //cout << i << " " << j << endl;
            }
        }
    }
    string ans = "No";
    
    for(int i=1;i<=n;i++) {
        if((sx-x[i])*(sx-x[i])+(sy-y[i])*(sy-y[i]) == r[i]*r[i]) {
            for(int j=1;j<=n;j++) {
                if((tx-x[j])*(tx-x[j])+(ty-y[j])*(ty-y[j]) == r[j]*r[j]) {
                    if(uf.same(i, j)) {
                        ans = "Yes";
                        //cout << i << " " << j << endl;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}