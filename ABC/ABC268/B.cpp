#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main() {
    string s, t;
    cin >> s >> t;
    string ans = "Yes";
    if(s.size() > t.size()) ans = "No";
    else {
        for(int i=0;i<s.size();i++) {
            if(s[i] != t[i]) {
                ans = "No";
                break;
            }
        }
    }
    cout << ans << endl;
}