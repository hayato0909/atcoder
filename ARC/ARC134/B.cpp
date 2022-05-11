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
    string s; cin >> s;
    int left=0, right=n-1;
    map<char, vector<int> > a;
    for(int i=0;i<n;i++) a[s[i]].push_back(i);
    string alp = "abcdefghijklmnopqrstuvwxyz";
    while(left < right) {
        int idx = 0;
        while(s[left] != alp[idx]) idx++;
        for(int i=0;i<idx;i++) {
            if(a[alp[i]].size() > 0) {
                int tmp = lower_bound(a[alp[i]].begin(), a[alp[i]].end(), right+1) - a[alp[i]].begin();
                tmp--;
                if(tmp < 0 || a[alp[i]][tmp] <= left) continue;
                else {
                    swap(s[left], s[a[alp[i]][tmp]]);
                    right = a[alp[i]][tmp] - 1;
                    break;
                }
            }
        }
        left++;
    }
    cout << s << endl;
}