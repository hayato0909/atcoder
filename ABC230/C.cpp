#include <iostream>
#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
using namespace std;

typedef long long ll;

int main() {
    ll n,a,b;
    cin >> n >> a >> b;
    ll p,q,r,s;
    cin >> p >> q >> r >> s;
    bool board[q-p+1][s-r+1];
    for(ll i=0;i<=q-p;i++) {
        for(ll j=0;j<=s-r;j++) board[i][j] = false;
    }

    ll low = max(1-a, 1-b), high = min(n-a, n-b);
    low = max(low, max(p-a, r-b));
    high = min(min(q-a, s-b), high);
    for(ll k=low;k<=high;k++) {
        board[a+k-p][b+k-r] = true;
        cout << a+k-p << " " << b+k-r << endl;
    }
    cout << endl;
    low = max(1-a, b-n), high = min(n-a, b-1);
    low = max(low, max(p-a, b-s));
    high = min(min(q-a, b-r), high);
    for(ll k=low;k<=high;k++) {
        board[a+k-p][b-k-r] = true;
        cout << a+k-p << " " << b-k-r << endl;
    }
    cout << endl;

    for(ll i=0;i<=q-p;i++) {
        for(ll j=0;j<=s-r;j++) {
            if(board[i][j]) cout << "#";
            else cout << ".";
        }
        cout << endl;
    }

}