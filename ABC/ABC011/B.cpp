#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;


int main(){
    string s; cin >> s;
    string komoji = "abcdefghijklmnopqrstuvwxyz";
    string oomoji = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    if('a' <= s[0] && s[0] <= 'z') {
        int idx = 0;
        while(komoji[idx] != s[0]) idx++;
        s[0] = oomoji[idx];
    }
    rep(i, 1, s.size()) {
        if('A' <= s[i] && s[i] <= 'Z') {
            int idx = 0;
            while(oomoji[idx] != s[i]) idx++;
            s[i] = komoji[idx];
        }
    }
    cout << s << endl;
}
