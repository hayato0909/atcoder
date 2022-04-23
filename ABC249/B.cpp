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
    string a = "abcdefghijklmnopqrstuvwxyz";
    string A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    map<char, int> n;
    for(int i=0;i<s.size();i++) {
        n[s[i]]++;
    }
    int cnt_a=0, cnt_A=0;
    bool flag = true;
    for(int i=0;i<26;i++) {
        if(n[a[i]] == 1) cnt_a++;
        else if(n[a[i]] > 1) {
            flag = false;
        }
        if(n[A[i]] == 1) cnt_A++;
        else if(n[A[i]] > 1) flag = false;
    }
    if(flag && cnt_a > 0 && cnt_A > 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}