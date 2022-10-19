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
    string s; cin >> s;
    sort(s.begin(), s.end());
    int ans = 0;

    do {
        for(int i=1;i<s.size();i++) {
            int a = 0, b = 0;
            rep(j, 0, i) a = a * 10 + (s[j] - '0');
            rep(j, i, s.size()) b = b * 10 + (s[j] - '0');
            ans = max(ans, a*b);
        }
    } while(next_permutation(s.begin(), s.end()));
    cout << ans << endl;
}