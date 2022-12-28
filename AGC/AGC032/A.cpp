#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;


int main() {
    int n; cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    vector<int> ans;

    while(a.size() != 0) {
        bool flag = false;
        for(int i=a.size()-1;i>=0;i--) {
            if(a[i] == i+1) {
                ans.push_back(a[i]);
                a.erase(a.begin() + i);
                flag = true;
                break;
            }
        }
        if(!flag) {
            cout << "-1" << endl;
            return 0;
        }
    }

    reverse(ans.begin(), ans.end());
    rep(i, 0, ans.size()) cout << ans[i] << endl;
}