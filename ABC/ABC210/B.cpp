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
    string s; cin >> s;
    for(int i=0;i<n;i+=2) {
        if(s[i] == '1') {
            cout << "Takahashi" << endl;
            break;
        } else if(s[i+1] == '1') {
            cout << "Aoki" << endl;
            break;
        }
    }
}