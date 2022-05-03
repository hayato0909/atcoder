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
    string s;
    cin >> s;
    map<char, int> n;
    for(int i=0;i<s.size();i++) {
        n[s[i]]++;
    }

    int tmp = 0;
    string t = "abc";
    for(int i=0;i<3;i++) {
        for(int j=i+1;j<3;j++) {
            tmp = max(tmp, abs(n[t[i]]-n[t[j]]));
        }
    }

    if(tmp <= 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}