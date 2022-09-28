#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    int num[7];
    num[0] = s[6] - '0';
    num[1] = s[3] - '0';
    num[2] = (s[7] - '0') + (s[1] - '0');
    num[3] = s[4] - '0';
    num[4] = (s[8] - '0') + (s[2] - '0');
    num[5] = s[5] - '0';
    num[6] = s[9] - '0';

    string ans = "No";
    if(s[0] == '0') {
        for(int i=0;i<6;i++) {
            for(int j=i+2;j<=6;j++) {
                if(num[i] != 0 && num[j] != 0) {
                    for(int k=i+1;k<j;k++) {
                        if(num[k] == 0) ans = "Yes";
                    }
                }
            }
        }
    }
    cout << ans << endl;
}