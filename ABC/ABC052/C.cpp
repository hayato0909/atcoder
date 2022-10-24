#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;

vector<bool> Eratosthenes(int N) {
    vector<bool> isprime(N+1, true);

    isprime[0] = isprime[1] = false;

    for (int p = 2; p <= N; ++p) {
        if (!isprime[p]) continue;

        for (int q = p * 2; q <= N; q += p) {
            isprime[q] = false;
        }
    }
    return isprime;
}

int main(){
    int n; cin >> n;
    vector<bool> isPrime(n+1);
    isPrime = Eratosthenes(n);
    ll ans = 1;
    rep(i, 0, n+1) {
        if(!isPrime[i]) continue;
        int num = 1;
        int prime = i;
        while(prime <= n) {
            num += n / prime;
            prime *= i;
            //cout << prime << endl;
        }
        ans = (ans * (ll)num) % mod; 
    }
    cout << ans << endl;
}