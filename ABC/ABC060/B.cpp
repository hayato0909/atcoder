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
    int a, b, c; cin >> a >> b >> c;
    int m = a % b;
    int sum = m;
    rep(i, 0, 100) {
        if(sum % b == c) {
            YES;
            return 0;
        } else sum += m;
    }
    NO;
}