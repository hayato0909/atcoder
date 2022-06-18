#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    int ans = 0;
    int num[4];
    for(int i=0;i<=3;i++) num[i] = 0;

    for(int i=1;i<=n;i++) {
        num[0]++;
        for(int j=3;j>=0;j--) {
            if(j+a[i] >= 4) {
                ans += num[j];
                num[j] = 0;
            } else {
                num[j+a[i]] = num[j];
                num[j] = 0;
            }
        }
    }
    cout << ans << endl;
}