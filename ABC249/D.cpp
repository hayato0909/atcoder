#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    ll a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    map<ll, ll> num;
    vector<ll> b;
    for(int i=1;i<=n;i++) {
        num[a[i]]++;
        if(num[a[i]] == 1) b.push_back(a[i]);
    }

    ll ans = 0;
    sort(b.begin(), b.end());
    for(int i=0;i<b.size();i++) {
        if(b[i] * b[i] > b[b.size()-1]) break;
        for(int j=i;j<b.size();j++) {
            if(b[i] * b[j] > b[b.size()-1]) break;
            if(num[b[i]*b[j]] > 0) {
                if(b[i] == 1 && b[j] == 1) ans += num[1] * num[1] * num[1];
                else if(i == j) ans += num[b[i]*b[j]] * num[b[i]] * num[b[j]];
                else ans += num[b[i]*b[j]] * num[b[i]] * num[b[j]] * 2;
            }
        }
    }

    cout << ans << endl;
}
