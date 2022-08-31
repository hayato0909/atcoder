#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, n; cin >> x >> y >> n;
    cout << min(x*n, y*(n/3)+x*(n%3)) << endl;
}