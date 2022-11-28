#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, ll> P;

const ll mod = 1000000007;

int main(){
    int n; cin >> n;
    map<string, int> m;
    string s;
    string ans = "Yes";
    string a = "HDCS", b = "A23456789TJQK";
    rep(i, 0, n) {
        cin >> s;
        bool flag = false;
        rep(i, 0, 4) {
            if(s[0] == a[i]) flag = true;
        }
        if(!flag) ans = "No";
        flag = false;
        rep(i, 0, b.size()) {
            if(s[1] == b[i]) flag = true;
        }
        if(!flag) ans = "No";
        if(m[s] == 1) ans = "No";
        else m[s]++;
    }
    cout << ans << endl;
}