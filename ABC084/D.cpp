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

bool prime[100001];

void isPrime(int n) {
    for(int i=2;i<=n;i++) prime[i] = true;
    prime[0] = prime[1] = false;
    for(int i=2;i<=n;i++) {
        if(!prime[i]) continue;
        for(int j=2*i;j<=n;j+=i) prime[j] = false;
    }
}

int main() {
    int q; cin >> q;
    int l[q], r[q];
    for(int i=0;i<q;i++) cin >> l[i] >> r[i];
    isPrime(100000);
    int dp[100001];
    dp[0] = 0;
    for(int i=1;i<=100000;i++) {
        if(prime[i] && i%2==1 && prime[(i+1)/2]) {
            dp[i] = dp[i-1] + 1;
        }
        else dp[i] = dp[i-1];
    }

    for(int i=0;i<q;i++) {
        cout << dp[r[i]] - dp[l[i]-1] << endl;
    }
}