#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int x, y, z; cin >> x >> y >> z;
    int flag = false;
    if(x > 0 && y > 0 && x > y) flag = true;
    if(x < 0 && y < 0 && y > x) flag = true;
    if(!flag) cout << abs(x) << endl;
    else {
        if((y > 0 && z > 0 && y < z) || (y < 0 && z < 0 && z < y)) cout << "-1" << endl;
        else cout << abs(z) + abs(x - z) << endl;
    }
}