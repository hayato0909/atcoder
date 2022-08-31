#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    ll p, q, r;
    cin >> n >> p >> q >> r;
    ll a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    ll sum[n+1];
    sum[0] = 0;
    for(int i=1;i<=n;i++) sum[i] = sum[i-1] + a[i];
    
    int x, y, z, w;
    for(int i=1;i<=n;i++) {
        x = i;
        //sum[y-1] = p + sum[x-1] となるyを探す
        y = lower_bound(sum+1, sum+n+1, p+sum[x-1]) - sum;
        if(y >= n || sum[y] != p+sum[x-1]) continue;
        y++;
        z = lower_bound(sum+1, sum+n+1, q+sum[y-1]) - sum;
        if(z > n || sum[z] != q+sum[y-1]) continue;
        z++;
        w = lower_bound(sum+1, sum+n+1, r+sum[z-1]) - sum;
        if(w > n || sum[w] != r+sum[z-1]) continue;
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}
