#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    if(a%b == 0) return b; 
    else return gcd(b, a%b);
} 

int main() {
    ll n,a,b; cin >> n >> a >> b; 
    if(a > b ) {
        ll tmp = a;
        a = b; 
        b = tmp;
    }
    ll lcm = a*b/gcd(a, b);
    ll numa = n / a, numb = n / b, num = n / lcm;
    ll ans = (1 + n)*n/2;
    ans -= (a + a*numa)*numa/2;
    ans -= (b + b*numb)*numb/2;
    ans += (lcm + lcm*num)*num/2;
    cout << ans << endl;
}