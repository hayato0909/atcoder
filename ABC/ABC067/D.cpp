#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v[n+1];
    int a,b;
    for(int i=0;i<n-1;i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int dpf[n+1], dps[n+1];
    for(int i=1;i<=n;i++) {
        dpf[i] = -1;
        dps[i] = -1;
    }
    dpf[1] = 0;
    queue<int> Q;
    Q.push(1);
    while(!Q.empty()) {
        int now = Q.front(); Q.pop();
        for(int next:v[now]) {
            if(dpf[next] == -1) {
                dpf[next] = dpf[now] + 1;
                Q.push(next);
            }
        }
    }
    dps[n] = 0;
    Q.push(n);
    while(!Q.empty()) {
        int now = Q.front(); Q.pop();
        for(int next:v[now]) {
            if(dps[next] == -1) {
                dps[next] = dps[now] + 1;
                Q.push(next);
            }
        }
    }
    int f = 0, s = 0;
    for(int i=1;i<=n;i++) {
        if(dpf[i] <= dps[i]) f++;
        else s++;
    }

    if(f > s) cout << "Fennec" << endl;
    else cout << "Snuke" << endl;
}