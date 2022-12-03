#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 998244353;

int main() {
    string s, t; cin >> s >> t;
    rep(i, 0, s.size()) {
        if(s[i] != t[i]) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << t.size() << endl;
}