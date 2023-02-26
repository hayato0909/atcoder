#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    string s; cin >> s;
    rep(i, 0, 1000) {
        if ('A' <= s[i] && s[i] <= 'Z') {
            cout << i + 1 << endl;
            break;
        }
    }
}
