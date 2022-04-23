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
    int n,k; cin >> n >> k;
    string s[n+1];
    for(int i=1;i<=n;i++) cin >> s[i];
    string a = "abcdefghijklmnopqrstuvwxyz";

    int ans = 0;
    for(int bit = 0; bit<(1<<n); bit++) {
        int cnt = 0;
        map<char, int> num;
        for(int i=0;i<n;i++) {
            if(bit & (1<<i)) {
                cnt++;
                for(int j=0;j<s[i+1].size();j++) {
                    num[s[i+1][j]]++;
                }
            }
        }
        int tmp = 0;
        for(int i=0;i<26;i++) {
            if(num[a[i]] == k) tmp++;
        }
        ans = max(ans, tmp);

    }
    cout << ans << endl;
}