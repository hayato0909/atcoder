#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a%b); 
}

int main() {
    int t; cin >> t;
    rep(i, 0, t) {
        int n, d, k; cin >> n >> d >> k;
        k--;
        int a = n / gcd(n, d);
        cout << (long long) d * k % n + k / a << endl;
    }
}
