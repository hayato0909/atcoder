#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n; cin >> n;
    int x, y;
    vector<P> v;
    for(int i=1;i<=n;i++) {
        cin >> x >> y;
        v.push_back(P(x, y));
    }
    sort(v.begin(), v.end());

    int l, r;
    l = v[0].first, r = v[0].second;

    for(int i=1;i<n;i++) {
        P now = v[i];
        if(r >= now.first) {
            r = max(r, now.second);
        } else {
            cout << l << " " << r << endl;
            l = now.first, r = now.second;
        }
    }
    cout << l << " " << r << endl;
}