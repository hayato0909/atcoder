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
    string s, t; cin >> s >> t;
    string ans = "";
    rep(i, 0, n) ans += "0";
    int nums = 0, numt = 0;
    rep(i, 0, n) {
        if(s[i] == '1') nums++;
        if(t[i] == '1') numt++;
    }

    for(int i=n-1;i>=0;i--) {
        if(nums == numt) break;
        if(nums > numt && s[i] == '1' && t[i] == '0') {
            ans[i] = '1';
            nums--;
            numt++;
        } else if(nums < numt && s[i] == '0' && t[i] == '1') {
            ans[i] = '1';
            nums++;
            numt--;
        }
    }

    if(nums == numt) cout << ans << endl;
    else cout << "-1" << endl;
}