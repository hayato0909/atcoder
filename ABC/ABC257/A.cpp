#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"   ;

    for(int i=0;i<26;i++) {
        if(x <= n * (i+1)) {
            cout << alp[i] << endl;
            return 0;
        }
    }
}