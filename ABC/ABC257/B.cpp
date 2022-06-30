#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,q; cin >> n >> k >> q;
    int a[k+1];
    for(int i=1;i<=k;i++) cin >> a[i];
    int l[q+1];
    for(int i=1;i<=q;i++) cin >> l[i];

    for(int i=1;i<=q;i++) {
        if(a[l[i]] == n) continue;
        if(l[i] < k && a[l[i]] + 1 == a[l[i]+1]) continue;
        a[l[i]]++;
    }

    for(int i=1;i<=k;i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}