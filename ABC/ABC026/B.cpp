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
    vector<int> r(n);
    rep(i, 0, n) cin >> r[i];

    int sum = 0;
    sort(r.begin(), r.end());
    reverse(r.begin(), r.end());
    rep(i, 0, n) {
        if(i % 2 == 0) sum += r[i]*r[i];
        else sum -= r[i]*r[i];
    }
    double ans = (double)sum * 3.14159265359;
    printf("%.10f\n", ans);
}