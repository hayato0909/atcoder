#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;

bool check(int h, int m) {
    string hh = to_string(h), mm = to_string(m);
    if (hh.size() == 1) hh = "0" + hh;
    if (mm.size() == 1) mm = "0" + mm;
    char tmp = hh[1];
    hh[1] = mm[0];
    mm[0] = tmp;
    if (stoi(hh) < 24 && stoi(mm) < 60) return true;
    else return false;
}

int main() {
    int h, m; cin >> h >> m;

    while (!check(h, m)) {
        m++;
        if (m == 60) {
            m = 0;
            h++;
            if (h == 24) {
                h = 0;
            }
        }
    }
    cout << h << " " << m << endl;
}