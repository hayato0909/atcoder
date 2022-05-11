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
    string alp = "abcdefghijklmnopqrstuvwxyz";
    string s,t;
    cin >> s >> t;

    int first = 0;
    while(s[0] != alp[first]) first++;
    int k = 0;
    while(t[0] != alp[(first+k)%26]) k++;

    bool flag = true;
    for(int i=1;i<s.size();i++) {
        int idx = 0;
        while(s[i] != alp[idx]) idx++;
        if(t[i] != alp[(idx+k)%26]) flag = false;
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}