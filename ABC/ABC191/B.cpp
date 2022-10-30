#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;


int main(){
    int n, x; cin >> n >> x;
    int a;
    rep(i, 0, n) {
        cin >> a;
        if(a != x) cout << a << " ";
    }
    cout << endl;
}
