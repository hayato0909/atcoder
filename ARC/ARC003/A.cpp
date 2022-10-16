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
    int sum = 0;

    rep(i, 0, n) {
        if(s[i] == 'A') sum += 4;
        else if(s[i] == 'B') sum += 3;
        else if(s[i] == 'C') sum += 2;
        else if(s[i] == 'D') sum += 1;
    }
    double ans = (double)sum / (double)n;
    printf("%.10f\n", ans);
}