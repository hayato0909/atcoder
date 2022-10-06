#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int gcd(int A, int B) {
    int a = A, b = B;
    if(b > a) swap(a, b);
    if(b == 0) return a;
    if(a%b == 0) return b;
    else return gcd(b, a%b);
}

int main() {
    int n; cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    int g = 0;
    for(int i=1;i<n;i++) g = gcd(g, abs(a[i] - a[i+1]));
    if(g == 1) cout << "2" << endl;
    else cout << "1" << endl;
}