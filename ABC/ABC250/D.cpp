#include <iostream>
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

vector<bool> Era(int n) {
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    for(int p=2;p<=n;p++) {
        if(!isPrime[p]) continue;
        for(int q=p*2;q<=n;q+=p) {
            isPrime[q] = false;
        }
    }
    return isPrime;
}

int main() {
    ll n; cin >> n;
    vector<bool> isPrime;
    isPrime = Era(1000000);
    vector<ll> prime;
    for(ll i=2;i<=1000000;i++) {
        if(isPrime[i]) prime.push_back(i);
    }
    ll ans = 0;
    for(ll i=1;i<prime.size();i++) {
        ll q = prime[i];
        if((ll) q*q*q > n) break;
        for(int j=0;j<i;j++) {
            if((ll) q*q*q*prime[j] <= n) ans++;
            else break;
        }
    }
    cout << ans << endl;
}