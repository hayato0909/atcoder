#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<string, int> P;


const ll mod = 1000000007;

int main(){
    ll x; cin >> x;
    ll ans = (x / 11ll) * 2;
    x = x % 11ll;
    if(0 < x && x <= 6) ans++;
    else if(x > 6) ans += 2;
    cout << ans << endl;
}