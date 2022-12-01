#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 998244353;

int main() {
    string o, e;
    cin >> o >> e;
    for(int i=0;i<o.size();i++) {
        cout << o[i];
        if(i < e.size()) cout << e[i];
    }
    cout << endl;
}