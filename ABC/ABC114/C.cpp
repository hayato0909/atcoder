#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 998244353;

int main() {
    int n; cin >> n;
    int i = 0;
    int ans = 0;
    rep(dig, 3, 10) {
        int ma = 1;
        rep(i, 0, dig) ma *= 3;
        rep(i, 0, ma) {
            int cnt[3] = {0, 0, 0};
            int tmp = i;
            string s = "";
            rep(j, 0, dig) {
                if(tmp % 3 == 0) {
                    s += "3";
                    cnt[0]++;
                }else if(tmp % 3 == 1) {
                    s += "5";
                    cnt[1]++;
                }else {
                    s += "7";
                    cnt[2]++;
                }
                tmp /= 3;
            }
            if(stoi(s) <= n && cnt[0] > 0 && cnt[1] > 0 && cnt[2] > 0) ans++;
        }
    }

    cout << ans << endl;
}
