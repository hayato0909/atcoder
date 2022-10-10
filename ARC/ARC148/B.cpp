#include <bits/stdc++.h>
using namespace std;
#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    int l = n;
    rep(i, 0, n) {
        if(s[i] == 'p') {
            l = i;
            break;
        }
    }

    string ans = s;
    rep(i, l, n) {
        int L = l, R = i;
        string tmp = s;
        while(L <= R) {
            if(s[L] == 'p') tmp[R] = 'd';
            else tmp[R] = 'p';
            if(s[R] == 'p') tmp[L] = 'd';
            else tmp[L] = 'p';
            L++;
            R--;
        }
        if(tmp < ans) ans = tmp;
    }
    cout << ans << endl;
}