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
    int a, b;
    cin >> a >> b;
    double s = (double)b / (double)a;
    int tmp = ((int)s * 10000) % 10;
    if(tmp >= 5) s += 0.001;
    printf("%.3f\n", s);
}