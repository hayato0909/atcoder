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
    long long t[n+1];
    int k[n+1];
    vector<int> a[n+1];
    for(int i=1;i<=n;i++) {
        cin >> t[i] >> k[i];
        for(int j=1;j<=k[i];j++) {
            int tmp;
            cin >> tmp;
            a[i].push_back(tmp);
        }
    }

    queue<int> Q;
    vector<int> tech;
    map<int, int> check;
    Q.push(n);
    check[n]++;

    while(!Q.empty()) {
        int now = Q.front(); Q.pop();
        tech.push_back(now);
        for(int i=0;i<k[now];i++) {
            if(check[a[now][i]] == 0) {
                Q.push(a[now][i]);
                check[a[now][i]]++;
            }
        }
    }
    long long ans = 0;
    for(int i=0;i<tech.size();i++) {
        ans += t[tech[i]];
    }
    cout << ans << endl;
}