#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

const ll INF = 1001001001001001;

int main() {
    int n; cin >> n;
    vector<string> s(n);
    rep(i, 0, n) cin >> s[i];
    string ans[5] = {"and", "not", "that", "the", "you"};
    rep(i, 0, n) {
        rep(j, 0, 5) {
            if (s[i] == ans[j]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
