#include <bits/stdc++.h>
using namespace std;

int main() {
    int h[4], w[4];
    for(int i=1;i<=3;i++) cin >> h[i];
    for(int i=1;i<=3;i++) cin >> w[i];

    int ans = 0;

    for(int i=1;i<=h[1];i++) {
        for(int j=1;j<=h[1];j++) {
            for(int k=1;k<=w[1];k++) {
                for(int l=1;l<=h[2];l++) {
                    int h1, h2, w1, w2;
                    if((h1 = h[1] - i - j) <= 0) continue;
                    if((h2 = h[2] - k - l) <= 0) continue;
                    if((w1 = w[1] - i - k) <= 0) continue;
                    if((w2 = w[2] - j - l) <= 0) continue;
                    if(w[3] - h1 - h2 == h[3] - w1 - w2 && w[3] - h1 - h2 > 0) ans++;
                }
            }
        }
    }
    cout << ans << endl;
}