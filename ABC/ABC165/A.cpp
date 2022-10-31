#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;

int main(){
    int k; cin >> k;
    int a, b; cin >> a >> b;
    string ans = "NG";
    rep(i, a, b+1) {
        if(i % k == 0) ans = "OK"; 
    }
    cout << ans << endl;
}