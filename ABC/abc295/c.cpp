#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<ll, int> P;

const ll mod = 998244353;

const ll INF = 1001001001001001;

int main() {
   int n; cin >> n;
   vector<int> a(n);
   rep(i, 0, n) cin >> a[i];
   sort(a.begin(), a.end());

   int ans = 0;
   rep(i, 0, n) {
       if (i + 1 < n && a[i] == a[i + 1]) {
           ans++;
           i++;
       }
   }
   cout << ans << endl;
}

