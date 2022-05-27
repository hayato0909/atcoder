#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;
    string s;
    for(int i=0;i<4;i++) {
        cin >> s;
        m[s]++;
    }
    string c[4] = {"H", "2B", "3B", "HR"};
    string ans = "Yes";
    for(int i=0;i<4;i++) {
        if(m[c[i]] != 1) ans = "No";
    }
    cout << ans << endl;
}