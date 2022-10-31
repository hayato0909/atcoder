#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<string, int> P;


const ll mod = 1000000007;

int main(){
    string x; cin >> x;
    string alp = "abcdefghijklmnopqrstuvwxyz";
    int n; cin >> n;
    vector<string> s(n);
    rep(i, 0, n) cin >> s[i];
    vector<P> v;
    rep(i, 0, n) {
        string tmp;
        rep(j, 0, s[i].size()) {
            int idx = 0;
            while(x[idx] != s[i][j]) idx++;
            tmp += alp[idx];
        }
        v.push_back(P(tmp, i));
    }
    sort(v.begin(), v.end());
    rep(i, 0, n) {
        cout << s[v[i].second] << endl;
    }
}