#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;

int main(){
    double n; cin >> n;
    n = n * 1.08;
    int ans = (int)n;
    if(ans < 206) cout << "Yay!" << endl;
    else if(ans == 206) cout << "so-so" << endl;
    else cout << ":(" << endl;
}