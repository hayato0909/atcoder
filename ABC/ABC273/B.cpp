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
    ll x, k; cin >> x >> k;
    ll c = 0, n = 10;
    while(c != k) {
        ll tmp = x % n;
        if(tmp >= n / 2) x = x/n*n + n;
        else x = x/n*n;
        //cout << x << endl;
        c++;
        n *= 10;
    }
    cout << x << endl;
}