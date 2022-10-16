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
    int n, c, k; cin >> n >> c >> k;
    vector<int> t(n);
    rep(i, 0, n) cin >> t[i];
    sort(t.begin(), t.end());

    int ans = 1;
    int start = t[0];
    int num = 1;

    rep(i, 1, n) {
        if(start + k >= t[i] && num < c) num++;
        else {
            ans++;
            start = t[i];
            num = 1;
        }
    }
    cout << ans << endl;
}