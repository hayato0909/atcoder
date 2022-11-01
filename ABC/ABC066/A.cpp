#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;


const ll mod = 1000000007;

int main() {
    vector<int> a(3);
    rep(i, 0, 3) cin >> a[i];
    sort(a.begin(), a.end());
    int ans = a[0] + a[1];
    cout << ans << endl;
}