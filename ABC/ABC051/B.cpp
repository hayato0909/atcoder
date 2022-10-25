#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;

int main(){
    int k, s; cin >> k >> s;
    int ans = 0;
    rep(x, 0, k+1) {
        rep(y, 0, k+1) {
            int z = s - x - y;
            if(0 <= z && z <= k) ans++;
        }
    }
    cout << ans << endl;
}