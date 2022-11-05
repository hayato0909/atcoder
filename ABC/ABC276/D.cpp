#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

int main(){
  int n; cin >> n;
  vector<int> a(n);
  rep(i, 0, n) cin >> a[i];
  vector<int> two(n, 0), three(n, 0);
  rep(i, 0, n) {
    int tmp = a[i];
    while(tmp % 2 == 0) {
      two[i]++;
      tmp /= 2;
    }
    while(tmp % 3 == 0) {
      three[i]++;
      tmp /= 3;
    }
  }
  int min2 = 100, min3 = 100;
  rep(i, 0, n) {
    min2 = min(min2, two[i]);
    min3 = min(min3, three[i]);
  }
  int ans = 0;
  rep(i, 0, n) {
    ans += two[i] - min2;
    rep(j, 0, two[i]-min2) a[i] /= 2;
    ans += three[i] - min3;
    rep(j, 0, three[i]-min3) a[i] /= 3;
  }
  rep(i, 0, n-1) {
    if(a[i] != a[i+1]) {
      cout << "-1" << endl;
      return 0;
    }
  }
  cout << ans << endl;
}