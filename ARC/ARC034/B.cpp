#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;

typedef long long ll;
typedef pair<int, int> P;

int main(){
    ll n; cin >> n;
    vector<ll> ans;
    for(ll i=max(1ll, n-9*17);i<n;i++) {
        ll sum = 0;
        ll tmp = i;
        while(tmp >= 10) {
            sum += tmp % 10;
            tmp /= 10;
        }
        sum += tmp;
        sum += i;
        if(sum == n) ans.push_back(i);
    }
    cout << ans.size() << endl;
    for(ll i:ans) cout << i << endl;
}