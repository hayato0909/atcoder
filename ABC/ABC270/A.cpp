#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int a, b; cin >> a >> b;
    int ans = 0;
    if(a%2 == 1 || b%2 == 1) ans += 1;
    a -= a%2;
    b -= b%2;
    if(a >= 4 || b >= 4) {
        ans += 4;
    }
    if(a >= 4) a-= 4;
    if(b >= 4) b -= 4;
    if(a >= 2 || b >= 2) ans += 2;
    cout << ans << endl;
}