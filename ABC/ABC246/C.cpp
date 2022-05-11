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

int main() {
     long long n,k,x;
     cin >> n >> k >> x;
     long long a[n+1];
     long long dp[n+1];
     vector<long long> check;

     long long cnt = 0, ans = 0;
     for(int i=1;i<=n;i++) {
          cin >> a[i];
          cnt += a[i] / x;
          check.push_back(a[i]%x);
          ans += a[i];
     }
     sort(check.begin(), check.end());

     if(cnt >= k) {
          ans -= k*x;
     } else {
          ans -= cnt*x;
          int num = 0;
          while(num + cnt <= k && num <= n) {
               ans -= check[n-num];
               num++;
          }
     }

     cout << ans << endl;
}