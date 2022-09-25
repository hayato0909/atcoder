#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    map<int, vector<int> > v;
    int u, w;
    for(int i=1;i<n;i++) {
        cin >> u >> w;
        v[u].push_back(w);
        v[w].push_back(u);
    }
    int num[n+1];
    for(int i=1;i<=n;i++) num[i] = -1;
    queue<int> Q;
    Q.push(x);
    num[x] = 0;
    while(!Q.empty()) {
        int now = Q.front(); Q.pop();
        for(int i:v[now]) {
            if(num[i] == -1) {
                num[i] = num[now] + 1;
                Q.push(i);
            }
        }
    }

    vector<int> ans;
    int now = y;
    ans.push_back(y);
    while(now != x) {
        for(int i:v[now]) {
            if(num[now] == num[i] + 1) {
                now = i;
                ans.push_back(i);
                break;
            } 
        }
    }
    reverse(ans.begin(), ans.end());
    for(int i:ans) cout << i << " ";
    cout << endl;
}