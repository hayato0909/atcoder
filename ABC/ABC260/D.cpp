#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n,k;
    cin >> n >> k;
    int p[n+1];
    for(int i=1;i<=n;i++) cin >> p[i];
    int ans[n+1];
    for(int i=1;i<=n;i++) ans[i] = -1;
    map<int, P> m;
    vector<int> v;
    if(k == 1) {
        for(int i=1;i<=n;i++) ans[p[i]] = i;
        for(int i=1;i<=n;i++) cout << ans[i] << endl;
        return 0;
    }

    for(int i=1;i<=n;i++) {
        int idx = lower_bound(v.begin(), v.end(), p[i]) - v.begin();
        if(idx == v.size()) {
            v.push_back(p[i]);
            m[p[i]] = P(0, 1);
        } else {
            m[p[i]] = P(v[idx], m[v[idx]].second+1);
            if(m[p[i]].second == k) {
                int prev = p[i];
                while(prev != 0) {
                    ans[prev] = i;
                    prev = m[prev].first;
                }
                v.erase(v.begin()+idx);
            } else {
                v[idx] = p[i];
            }
        }
    }
    cout << endl;
    for(int i=1;i<=n;i++) {
        cout << ans[i] << endl;
    }
}