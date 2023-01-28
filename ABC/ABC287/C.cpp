#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> v(n+1);
    int U, V;
    rep(i, 0, m) {
        cin >> U >> V;
        v[U].push_back(V);
        v[V].push_back(U);
    }
    int start = -1;
    rep(i, 1, n+1) {
        if (v[i].size() == 1) {
            start = i;
            break;
        }
    }
    if (start == -1) {
        cout << "No" << endl;
        return 0;
    }

    vector<int> check(n+1, -1);
    int next, now = start;
    check[start] = 1;
    int before = start;
    start = v[start][0];
    check[start] = 1;
    while(1) {
        if (v[start].size() == 1) break;
        else if (v[start].size() > 2) {
            cout << "No" << endl;
            return 0;
        }
        if (v[start][0] == before) {
            before = start;
            start = v[start][1];
        } else {
            before = start;
            start = v[start][0];
        }

        if (check[start] == -1) {
            check[start] = 1;
        } else {
            cout << "No" << endl;
            return 0;
        }
    }

    rep(i, 1, n+1) {
        if (check[i] == -1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}