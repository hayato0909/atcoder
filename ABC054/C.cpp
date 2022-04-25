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
    int a,b;
    int ans = 0;
    map<int, vector<int> > g;
    vector<int> v;
    for(int i=0;i<m;i++) {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(int i=1;i<=n;i++) v.push_back(i);

    do {
        if(v[0] == 1) {
            int next, now;
            bool check = false, flag = true;
            for(int i=0;i<n-1;i++) {
                now = v[i];
                next = v[i+1];
                check = false;
                for(int j:g[now]) {
                    if(j == next) check = true;
                }
                if(!check) flag = false;
            }
            if(flag) ans++;
        }
    } while(next_permutation(v.begin(), v.end()));
    cout << ans << endl;
}