#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    rep(i, 1, n) {
        int ans = 0;
        for (int j=0;j+i<n;j++) {
            if (s[j] == s[i+j]) break;
            ans++;
        }
        cout << ans << endl;
    }
}

