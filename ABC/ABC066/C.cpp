#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, ll> P;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    deque<int> q;
    rep(i, 0, n) {
        if(i % 2 == 0) {
            q.push_back(a[i]);
        } else {
            q.push_front(a[i]);
        }
    }
    vector<int> ans;
    rep(i, 0, n) {
        ans.push_back(q.front());
        q.pop_front();
    }
    if(n % 2 == 1) reverse(ans.begin(), ans.end());
    rep(i, 0, n) {
        cout << ans[i] << " ";
    }
    cout << endl;
}