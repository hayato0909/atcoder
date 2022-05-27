#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n,q; cin >> n >> q;
    vector<int> v[n+1];
    int a,b;
    for(int i=1;i<n;i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int c[q],d[q];
    for(int i=0;i<q;i++) cin >> c[i] >> d[i];

    int num[n+1];
    for(int i=1;i<=n;i++) num[i] = -1;
    queue<int> Q;
    num[1] = 1;
    Q.push(1);
    while(!Q.empty()) {
        int now = Q.front();
        Q.pop();
        for(int i:v[now]) {
            if(num[i] == -1) {
                num[i] = 1 - num[now];
                Q.push(i);
            }
        }
    }

    for(int i=0;i<q;i++) {
        if(num[c[i]] == num[d[i]]) cout << "Town" << endl;
        else cout << "Road" << endl;
    }
}