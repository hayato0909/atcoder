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
    int ans = 0;
    ans = n / 500 * 1000;
    n = n % 500; 
    ans += n/ 5 * 5;
    cout << ans << endl;
}