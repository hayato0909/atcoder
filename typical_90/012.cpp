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
    int h,w;
    cin >> h >> w;
    int q;
    cin >> q;
    bool board[h+1][w+1];
    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) board[i][j] = false;
    }
    UnionFind uf(h * w);
    int dh[4] = {1, 0, -1, 0}, dw[4] = {0, 1, 0, -1};

    for(int i=1;i<=q;i++) {
        int mode;
        cin >> mode;
        if(mode == 1) {
            int r,c;
            cin >> r >> c;
            board[r][c] = true;
            for(int i=0;i<4;i++) {
                if(1<=r+dh[i] && r+dh[i]<=h && 1<=c+dw[i] && c+dw[i]<=w) {
                    if(board[r+dh[i]][c+dw[i]]) uf.unite((r-1)*w+c, (r+dh[i]-1)*w+c+dw[i]);
                }
            }
        } else {
            int ra,ca,rb,cb;
            cin >> ra >> ca >> rb >> cb;
            if(board[ra][ca] && uf.same((ra-1)*w+ca, (rb-1)*w+cb)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}