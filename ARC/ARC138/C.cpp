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

int main() {
    int n;
    cin >> n;
    ll a[n];
    int b[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) b[i] = a[i];
    ll sum[n];
    sum[0] = 0;
    for(int i=0;i<n/2;i++) sum[0] += a[i];
    ll min = sum[0], idx = 0;
    for(int i=1;i<n;i++) {
        sum[i] = sum[i-1] - a[i-1] + a[(i + n/2) % n];
        if(sum[i] < min) {
            min = sum[i];
            idx = i;
        }
    }
    sort(b, b+n);
    int mid = b[n/2];
    int num = n/2;
    for(int i=n/2-1;i>=0;i--) {
        if(b[i] == mid)  num--;
        else break;
    }
    map<int, int> check;

    ll ans = 0;
    int left = idx;
    int sunuke = left;
    for(int i=0;i<n/2;i++) {
        if(num > 0) {
            while(a[sunuke] < mid || check[sunuke] == 1) sunuke = (sunuke + 1) % n;
            check[sunuke]++;
            ans += a[sunuke];
            num--;

            while(check[left] == 1) left = (left + 1) % n;
            check[left]++;
            if(a[left] >= mid) num--;
        } else {
            int tmp1, tmp2;
            while(check[left] == 1) left = (left + 1) % n;
            tmp1 = left;
            tmp2 = (left + 1) % n;
            while(check[tmp2] == 1) tmp2 = (tmp2 + 1) % n;
            if(a[tmp1] < a[tmp2]) {
                ans += a[tmp2];
                check[tmp1]++;
                check[tmp2]++;
            } else {
                ans += a[tmp1];
                check[tmp1]++;
                check[tmp2]++;
            }
            left = tmp2;
        }
    }
    cout << idx << " " << ans << endl;
}