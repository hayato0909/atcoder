#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    string ans = "Yes";
    int lens = 0, lent = 0;
    while(true) {
        if(lens == s.length() && lent == t.length()) break;
        else if(lens == s.length() || lent == t.length()) {
            ans = "No";
            break;
        }
        if(s[lens] != t[lent]) {
            ans = "No";
            break;
        }
        if(lens < s.length() - 1) {
            if(s[lens] == s[lens+1]) {
                if(lent < t.length() - 1 && t[lent] == t[lent+1]) {
                    int cnt = 0;
                    while(lens < s.length() && s[lens] == s[lens+1]) {
                        lens++;
                        cnt++;
                    }
                    while(lent < t.length() && t[lent] == t[lent+1]) {
                        lent++;
                        cnt--;
                    }
                    if(cnt > 0) {
                        ans = "No";
                        break;
                    }
                } else {
                    ans = "No";
                    break;
                }
            }
        }
        lent++;
        lens++;
    }

    cout << ans << endl;
}