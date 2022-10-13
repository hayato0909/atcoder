#include <bits/stdc++.h>
using namespace std;
#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n; cin >> n;
    bool ans[100010];
    rep(i, 0, 100010) ans[i] = true;
    ans[0] = false;
    ans[1] = false;
    rep(i, 0, 100010) {
        if(!ans[i]) continue;

        for(int j=i*2;j<100010;j+=i) {
            ans[j] = false;
        }
    }
    while(!ans[n]) n++;
    cout << n << endl;
}