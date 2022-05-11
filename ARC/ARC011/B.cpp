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
    map<char, int> a;
    string tmp = "zrbcdwtjfqlvsxpmhkng";
    for(int i=0;i<20;i++) {
        a[tmp[i]] = i / 2;
    }

    int flag = 0;

    for(int i=0;i<n;i++) {
        string s;
        cin >> s;
        int cnt = 0;
        for(int j=0;j<s.size();j++) {
            if(s[j] >= 'A' && s[j] <= 'Z') s[j] = s[j] + ('a' - 'A');
            if(s[j] >= 'a' && a[j] <= 'z') {
                if(s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u' && s[j]!='y') {
                    if(flag != 0 && cnt == 0) cout << " ";
                    cout << a[s[j]];
                    cnt++;
                    flag++;
                }
            }
        }
    }
    cout << endl;
}