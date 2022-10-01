#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    string ans;
    string alp = "ABCDEF";
    if(n < 16) {
        if(n < 10) {
            cout << "0" << n << endl;
            return 0;
        } else {
            cout << "0" << alp[n-10] << endl;
        }
    } else {
        int m = 0;
        while(16*m<=n) m++;
        m--;
        n=n%16;
        if(m < 10) cout << m;
        else cout << alp[m-10];
        if(n < 10) {
            cout << n << endl;
            return 0;
        } else {
            cout << alp[n-10] << endl;
        }
    }
}