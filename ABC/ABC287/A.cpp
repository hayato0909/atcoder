#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    int n; cin >> n;
    int f = 0;
    string s;
    rep(i, 0, n) {
        cin >> s;
        if (s[0] == 'F') f++;
    }

    if (f > n/2) cout << "Yes" << endl;
    else cout << "No" << endl;
}