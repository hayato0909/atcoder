#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string ans = "AGC0";
    if(n >= 42) n++;
    ans += n/10 + '0';
    n = n % 10;;
    ans += n + '0';
    cout << ans << endl;
}