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
    int n,m;
    cin >> n >> m;
    int a[m+1],b[m+1],c[m+1],d[m+1];
    for(int i=1;i<=m;i++) cin >> a[i] >> b[i];
    for(int i=1;i<=m;i++) cin >> c[i] >> d[i];
    map<int, vector<int> > t,s;
    for(int i=1;i<=m;i++) {
        t[a[i]].push_back(b[i]);
        t[b[i]].push_back(a[i]);
        s[c[i]].push_back(d[i]);
        s[d[i]].push_back(c[i]);
    }

    vector<int> p;
    for(int i=1;i<=n;i++) p.push_back(i);
    bool flag = false;
    do {
        flag = true;
        for(int i=1;i<n;i++) {
            for(int j=0;j<t[i].size();j++) {
                if(i < t[i][j]) {
                    //p[i-1]とp[t[i][j]]がつながっていれば良い
                    int tmp1 = p[i-1], tmp2 = p[t[i][j]-1];
                    bool check = false;
                    for(int k=0;k<s[tmp1].size();k++) {
                        if(s[tmp1][k] == tmp2) check = true;
                    }
                    if(!check) flag = false;
                }
            }
        }
        if(flag) {
            cout << "Yes" << endl;
            return 0;
        }
    } while(next_permutation(p.begin(), p.end()));

    cout << "No" << endl;
}