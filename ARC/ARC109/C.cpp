#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 998244353;

char janken(char a, char b) {
    if(a == b) return a;
    if((a == 'R' && b == 'S') || (b == 'R' && a == 'S')) return 'R';
    else if((a == 'P' && b == 'S') || (b == 'P' && a == 'S')) return 'S';
    else return 'P';
}

int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    while(k != 0) {
        string t = s + s;
        rep(i, 0, n) {
            s[i] = janken(t[2*i], t[2*i+1]);
        }
        k--;
    }
    cout << s[0] << endl;
}