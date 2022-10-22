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
    vector<int> M(2*n+2);

    int a;
    M[1] = 0;
    for(int i=1;i<=n;i++) {
        cin >> a;
        M[2*i] = M[a] + 1;
        M[2*i+1] = M[a] + 1;
    }
    rep(i, 1, 2*n+2) cout << M[i] << endl;
}