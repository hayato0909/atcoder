#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main(){
    string n; cin >> n;
    int f = 0;
    rep(i, 0, n.size()) f += n[i] - '0';
    int x = stoi(n);
    if(x % f == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}