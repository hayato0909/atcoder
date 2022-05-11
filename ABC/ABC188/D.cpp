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
    ll n, C; cin >> n >> C;
    ll a[n], b[n], c[n];
    for(int i=0;i<n;i++) cin >> a[i] >> b[i] >> c[i];
    map<ll, ll> prime;
    for(int i=0;i<n;i++) {
        prime[a[i]] += c[i];
        prime[b[i]+1] -= c[i];
    }

    ll day = 0, money, ans = 0;

    for(map<ll, ll>::iterator i=prime.begin();i!=prime.end();i++) {
        if(day == 0) {
            day = i -> first;
            money = i -> second;
        } else {
            if(money >= C) ans += C * (i->first - day);
            else ans += money * (i->first - day);
            day = i -> first;
            money += i -> second;
        }
    }
    if(money >= C) ans += C ;
    else ans += money;

    cout << ans << endl;
}