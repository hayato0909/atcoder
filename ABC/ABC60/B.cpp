#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    string ans = "NO";
    int tmp = a % b;
    int sum = 0;
    for(int i=0;i<100;i++) {
        sum = (sum + tmp) % b;
        if(sum == c) ans = "YES";
    }
    cout << ans << endl;
}