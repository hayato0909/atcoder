#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll s; cin >> s;
    int n = 1000000000;
    int x = (n - s%n)%n, y = (s + x)/n;
    cout << "0 0 1000000000 1 " << x << " " << y << endl;
}