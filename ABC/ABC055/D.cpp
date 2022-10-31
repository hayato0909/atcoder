#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<string, int> P;


const ll mod = 1000000007;

char rev(char c) {
    if(c == 'S') return 'W';
    else return 'S';
}

char next(char s, char pre, char now) {
    if(now == 'S') {
        if(s == 'o') return pre;
        else return rev(pre);
    } else {
        if(s == 'o') return rev(pre);
        else return pre;
    }
}

bool check(char s, char pre, char now, char next) {
    if(s == 'o') {
        if(now == 'S') {
            if(pre == next) return true;
            else return false;
        } else {
            if(pre != next) return true;
            else return false;
        }
    } else {
        if(now == 'W') {
            if(pre == next) return true;
            else return false;
        } else {
            if(pre != next) return true;
            else return false;
        }
    }
}

int main() {
    int n; cin >> n;
    string s; cin >> s;
    string ans = "";
    string tmp[4] = {"SS", "SW", "WS", "WW"};

    rep(i, 0, 4) {
        ans = "";
        ans += tmp[i];
        rep(j, 1, n-1) {
            //cout << next(s[j], ans[j-1], ans[j]); 
            ans += next(s[j], ans[j-1], ans[j]);
        }
        if(check(s[n-1], ans[n-2], ans[n-1], ans[0]) && check(s[0], ans[n-1], ans[0], ans[1])) {
            cout << ans << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
}