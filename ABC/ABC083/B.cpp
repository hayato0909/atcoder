#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a,b; cin >> a >> b;
    int ans = 0;
    for(int i=1;i<=n;i++) {
        int tmp = 0;
        int num = i;
        while(num >= 10) {
            tmp += num%10;
            num /= 10;
        }
        tmp += num;
        if(a <= tmp && tmp <= b) ans += i;
    }
    cout << ans << endl;
}