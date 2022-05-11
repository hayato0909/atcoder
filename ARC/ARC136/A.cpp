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
    int n; cin >> n;
    string s;
    cin >> s;
    string ans;
    for(int i=0;i<n;i++) {
        if(i<n-1 && s[i] == 'B' && s[i+1] == 'A') {
            s[i] = 'A';
            s[i+1] = 'B';
            ans += s[i];
        } else if(i<n-1 && s[i] == 'B' && s[i+1] == 'B') {
                ans += 'A';
                i++;
        } else {
            ans += s[i];
        }
    }
    cout << ans << endl;
}