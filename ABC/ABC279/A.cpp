#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;

int main(){
    string s; cin >> s;
    int ans = 0;
    for(int i=0;i<s.size();i++) {
        if(s[i] == 'w') ans += 2;
        else ans++;
    }
    cout << ans << endl;
}