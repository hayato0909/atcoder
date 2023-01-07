#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;

vector<ll> Eratosthenes(int N) {
    vector<bool> isprime(N+1, true);

    isprime[0] = isprime[1] = false;

    for (int p = 2; p <= N; ++p) {
        if (!isprime[p]) continue;

        for (int q = p * 2; q <= N; q += p) {
            isprime[q] = false;
        }
    }

    vector<ll> ans;
    rep(i, 1, N+1) {
        if (isprime[i]) ans.push_back((ll)i);
    }
    return ans;
}

int main() {
    int t; cin >> t;
    vector<ll> prime;
    prime = Eratosthenes(3000000);

    rep(j, 0, t) {
        ll n; cin >> n;
        for(ll i:prime) {
            if (n % i == 0) {
                n = n / i;
                if (n % i == 0) {
                    ll p = i, q = n / i;
                    cout << p << " " << q << endl;
                } else {
                    ll q = i, p = sqrt(n);
                    cout << p << " " << q << endl;
                }
                break;
            }
        }
    }
}