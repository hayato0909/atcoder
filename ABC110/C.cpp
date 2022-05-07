#include <iostream>
#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    string s,t; cin >> s >> t;
    string ans = "Yes";
    map<char, char> a;
    string alp = "abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<26;i++) a[alp[i]] = '.';
    for(int i=0;i<s.size();i++) {
        if(a[s[i]] == '.')  a[s[i]] = t[i];
        else {
            if(a[s[i]] != t[i]) ans = "No";
        }
    }
    for(int i=0;i<26;i++) a[alp[i]] = '.';
    for(int i=0;i<s.size();i++) {
        if(a[t[i]] == '.') a[t[i]] = s[i];
        else {
            if(a[t[i]] != s[i]) ans = "No";
        }
    }
    cout << ans << endl;
}