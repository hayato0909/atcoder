#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;

typedef long long ll;
typedef pair<int, int> P;

int main() {
  string s; cin >> s;
  int ans = -1;
  for(int i=0;i<s.size();i++) {
    if(s[i] == 'a') {
      ans = i + 1;
    }
  }
  cout << ans << endl;
}