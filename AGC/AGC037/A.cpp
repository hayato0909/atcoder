#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 998244353;

int main() {
    string s; cin >> s;
    string l = string(1, s[0]);
    string r = "";
    int ans = 1;
    for(int i=1;i<s.size();i++) {
        r += s[i];
        if(l != r) {
            ans++;
            l = r;
            r = "";
        }
    }
    cout << ans << endl;
}