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
    ll n, k;
    cin >> n >> k;
    ll s[n];
    ll ans = 0;
    bool zero_check = false;
    for(int i=0;i<n;i++) {
        cin >> s[i];
        if(s[i]== 0) zero_check = true;
    }

    if(zero_check) {
        ans = n;
    } else {
        int first = 0;
        ll now = 1, cnt = 0;
        for(int i=0;i<n;i++) {
            now *= s[i];
            cnt++;
            if(now > k) {
                while(first != i && now > k)  {
                    now /= s[first];
                    first++;
                    cnt--;
                }
                if(now > k) {
                    first = i + 1;
                    now = 1;
                    cnt = 0;
                }
            }
            ans = max(ans, cnt);
        }
    }

    cout << ans << endl;
}