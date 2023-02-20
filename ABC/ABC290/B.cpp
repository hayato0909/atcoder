#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n, k; cin >> n >> k;
    int cnt = 0;
    string s, t;
    cin >> s;
    rep(i, 0, n) {
        if (s[i] == 'o' && cnt < k)  {
            t += 'o';
            cnt++;
        } else {
            t += 'x';
        }
    }
    cout << t << endl;
}
