#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s[n+1];
    for(int i=1;i<=n;i++) cin >> s[i];

    int ans = 100000000;
    for(int i=0;i<=9;i++) {
        int num[10];
        for(int j=0;j<10;j++) num[j] = 0;
        for(int j=1;j<=n;j++) {
            for(int k=0;k<=9;k++) {
                if((s[j][k] - '0') == i) {
                    num[k]++;
                    break;
                }
            }
        }
        int last, cnt = 0;
        for(int j=0;j<=9;j++) {
            if(cnt <= num[j]) {
                cnt = num[j];
                last = j;
            }
        }
        ans = min(ans, last+10*(num[last]-1));
    }
    cout << ans << endl;
}