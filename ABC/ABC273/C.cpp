#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;

typedef long long ll;
typedef pair<int, int> P;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    vector<int> ans(n);
    rep(i, 0, n) ans[i] = 0;
    set<int> s;
    rep(i, 0, n) s.insert(a[i]);
    vector<int> v;
    for(int i:s) v.push_back(i);
    rep(i, 0, n) {
        int idx = lower_bound(v.begin(), v.end(), a[i]) - v.begin();
        ans[v.size()-idx-1]++;
    }

    rep(i, 0, n) cout << ans[i] << endl;
}