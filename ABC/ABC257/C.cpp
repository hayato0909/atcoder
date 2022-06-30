#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    int w[n+1];
    for(int i=1;i<=n;i++) cin >> w[i];

    int num = 0;
    vector<P> v;
    for(int i=1;i<=n;i++) {
        if(s[i-1] == '0') num++;
        v.push_back(P(w[i], s[i-1]-'0'));
    }
    sort(v.begin(), v.end());

    int ans = n - num;
    int child = 0;
    for(int i=0;i<n;i++) {
        if(v[i].second == 0) child++;
        if(i < n - 1 && v[i].first == v[i+1].first) continue;
        ans = max(ans, child+(n-num-(i+1-child)));
    }
    ans = max(ans, num);
    cout << ans << endl;
}