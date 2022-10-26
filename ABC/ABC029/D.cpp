#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;


int main(){
    ll n; cin >> n;
    ll ans = 0;
    ll ten = 10;
    while(ten <= n*10) {
        ans += (n / ten) * (ten / 10);
        ll tmp = ten * (n / ten) + (ten / 10) + (ten / 10);
        if(n >= tmp) ans += ten / 10;
        else if(n >= tmp - ten/10) ans += n - (tmp - ten/10) + 1;
        ten *= 10;
    }
    cout << ans << endl;
}
