#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,c; cin >> n >> c;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    int first[2], second[2];
    int fnum[2], snum[2];
    int num[11];
    for(int j=0;j<=1;j++) {
        for(int i=1;i<=10;i++) num[i] = 0;
        for(int i=1;i<=n;i++) {
            if(i % 2 == j) {
                num[a[i]]++;
            }
        }
        first[j] = 0, second[j] = 0;
        fnum[j]= 0, snum[j] = 0;
        for(int i=1;i<=10;i++) {
            if(num[i] > fnum[j]) {
                second[j] = first[j];
                snum[j] = fnum[j];
                first[j] = i;
                fnum[j] = num[i];
            } else if(num[i] > second[j]) {
                second[j] = i;
                snum[j] = num[i];
            }
        }
    }

    int ans = 100000;
    int f[3] = {first[0], first[0], second[0]}, s[3] = {first[1], second[1], first[1]};
    for(int i=0;i<3;i++) {
        if(f[i] != s[i]) {
            int tmp = 0;
            for(int j=1;j<=n;j++) {
                if(j%2 == 0) {
                    if(a[j] != f[i]) tmp++;
                } else {
                    if(a[j] != s[i]) tmp++;
                }
            }
            ans = min(ans, tmp);
        }
    }

    cout << ans * c << endl;
}