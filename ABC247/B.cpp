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
    int n;
    cin >> n;
    map<string, int> a;

    bool flag = true;
    string s[n+1],t[n+1];
    for(int i=1;i<=n;i++) {
        cin >> s[i] >> t[i];
        a[s[i]]++;
        a[t[i]]++;
    }

    for(int i=1;i<=n;i++) {
        if(a[s[i]] == 1 || a[t[i]] == 1) continue;
        else if(s[i] == t[i] && a[s[i]] == 2) continue;
        else flag = false;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}