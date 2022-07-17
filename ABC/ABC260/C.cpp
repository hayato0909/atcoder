#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

ll x, y;
ll blue(ll, ll);

ll red(ll num, ll level) {
    if(level == 1) return 0;
    else return red(num, level-1)+blue(num*x, level);
}

ll blue(ll num, ll level) {
    if(level == 1) return num;
    else return red(num, level-1)+blue(num*y, level-1);
}

int main() {
    ll n;
    cin >> n >> x >> y;
    cout << red(1, n) << endl;
}