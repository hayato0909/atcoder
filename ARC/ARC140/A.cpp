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
    string s; cin >> s;
    int cnt[26];
    bool flag = false;
    for(int i=1;i<=n;i++) {
        if(n % i != 0) continue;
        int num = 0;
        for(int j=0;j<=i-1;j++) {
            for(int k=0;k<26;k++) cnt[k] = 0;
            for(int k=j;k<n;k+=i) {
                cnt[s[k]-'a']++;
            }
            int all = 0, m = 0;
            for(int k=0;k<26;k++) {
                if(m < cnt[k]) m = cnt[k];
                all += cnt[k];
            }
            num += all - m;
        }
        if(num <= k) {
            flag = true;
            cout << i << endl;
            break;
        }
    }
}