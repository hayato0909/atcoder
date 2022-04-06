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
    int n,k;
    cin >> n >> k;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];

    map<int, int> check;
    int ans = 0, cnt = 0, pos = 0;

    for(int i=1;i<=n;i++) {
        if(check[a[i]] == 0) cnt++;
        check[a[i]]++;
        while(cnt > k) {
            pos++;
            check[a[pos]]--;
            if(check[a[pos]] == 0) cnt--;
        }
        ans = max(ans, i-pos);
    }

    cout << ans << endl;
    return 0;
}