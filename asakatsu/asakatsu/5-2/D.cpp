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
    string s; cin >> s;
    ll ans = 0;
    ll cnt = 0;
    ll dp[50001];
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=50000;i++) {
        dp[i] = 1 + (dp[i-1] - dp[i-2]) + dp[i-1];
    }
    for(int i=0;i<s.size();i++) {
        if(s[i] == '2') {
            i++;
            if(i<s.size() && s[i] == '5') {
                cnt++;
            } else {
                ans += dp[cnt];
                cnt = 0;
                i--;
            }
        } else {
            ans += dp[cnt];
            cnt = 0;
        }
    }
    ans += dp[cnt];
    cout << ans << endl;
}