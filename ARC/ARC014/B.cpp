#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    map<string, int> m;
    string ans = "DRAW";
    string s[n+1];
    cin >> s[1];
    m[s[1]]++;
    for(int i=2;i<=n;i++) {
        cin >> s[i];
        if(m[s[i]] == 0 && s[i][0] == s[i-1][s[i-1].size()-1]) {
            m[s[i]]++;
            continue;
        } else if(ans == "DRAW") {
            if(i % 2 == 1) ans = "LOSE";
            else ans = "WIN";
        }
    }
    cout << ans << endl;
}