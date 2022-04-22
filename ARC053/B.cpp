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
    string s;
    cin >> s;
    map<char, int> n;
    string a = "abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<s.size();i++) {
        n[s[i]]++;
    }
    int d = 0, o = 0;
    for(int i=0;i<26;i++) {
        d += n[a[i]] / 2;
        o += n[a[i]] % 2;
    }

    int ans = 0;
    if(o == 0 || o == 1) ans = d * 2 + o;
    else {
        ans = (d / o) * 2 + 1;
    }
    cout << ans << endl;
}