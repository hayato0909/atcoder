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

bool first[10];
int n;

int num(bool s[], int cnt) {
    bool flag = true;
    for(int i=0;i<n;i++) {
        if(!s[i]) flag = false;
    }
    if(flag) return cnt;
    int ans = 1000000;
    for(int i=1;i<n;i++) {
        bool next[n];
        for(int j=0;j<n;j++) next[j] = s[j];
        int check = 0;
        for(int j=0;j<n;j++) {
            if(!next[(i+j)%n] && first[j]) {
                next[(i+j)%n] = true;
                check++;
            }
        }
        if(check > 0) ans = min(ans, num(next, cnt+1));
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    n = s.size();
    bool ss[n];
    for(int i=0;i<n;i++) {
        if(s[i] == 'o') {
            ss[i] = true;
            first[i] = true;
        } else {
            ss[i] = false;
            first[i] = false;
        }
    }

    cout << num(ss, 1) << endl;
}