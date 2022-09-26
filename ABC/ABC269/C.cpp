#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main() {
    ll n; cin >> n;
    vector<ll> v;
    for(ll i=0;i<=100;i++) {
        if(n < (1ll << i)) break;
        if(n & (1ll << i)) {
            v.push_back((1ll << i));
        }
    }
    vector<ll> ans;
    ans.push_back(0ll);
    cout << "0" << endl;
    for(ll i:v) {
        int e = ans.size();
        for(int j=0;j<e;j++) {
            cout << i + ans[j] << endl;
            ans.push_back(i + ans[j]);
        }
    }
}