#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;

int main(){
    int h, w; cin >> h >> w;
    string s[h], t[h];
    rep(i, 0, h) cin >> s[i];
    rep(i, 0, h) cin >> t[i];
    map<string, int> m;

    rep(i, 0, w) {
        string tmp = "";
        rep(j, 0, h) tmp += s[j][i];
        m[tmp]++;
    }

    bool flag = true;
    rep(i, 0, w) {
        string tmp = "";
        rep(j, 0, h) tmp += t[j][i];
        if(m[tmp] > 0) m[tmp]--;
        else flag = false;
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}