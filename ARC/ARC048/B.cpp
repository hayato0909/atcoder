#include <bits/stdc++.h>
using namespace std;
#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;
typedef pair<int , P> PP;

int main() {
    int n; cin >> n;
    vector<PP> v(n);
    rep(i, 0, n) {
        cin >> v[i].first >> v[i].second.first;
        v[i].second.second = i;
    }
    sort(v.begin(), v.end());

    rep(i, 0, n) {
        int r = v[i].first, h = v[i].second.first, num = v[i].second.first;
    }
}