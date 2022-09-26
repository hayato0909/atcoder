#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n; cin >> n;
    ll k; cin >> k;
    ll a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    ll l = -1, r = k + 1;
    while(r - l > 1) {
        ll mid = (l + r) / 2;
        ll num = 0;
        for(int i=0;i<n;i++) {
            if(a[i] >= mid) num += mid;
            else num += a[i];
        }
        if(num >= k) r = mid;
        else l = mid; 
    }
    ll ans = r - 1, cnt = 0;
    for(int i=0;i<n;i++) {
        if(a[i] >= ans) {
            a[i] -= ans;
            cnt += ans;
        } else {
            cnt += a[i];
            a[i] = 0;
        }
    }
    for(int i=0;i<n;i++) {
        if(cnt == k) break;
        if(a[i] == 0) continue;
        cnt++;
        a[i]--;
    }

    for(int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}