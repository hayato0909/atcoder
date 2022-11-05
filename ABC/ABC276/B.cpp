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
  int n, m; cin >> n >> m;
  vector<int> a[n+1];
  int A, B;
  rep(i, 0, m) {
    cin >> A >> B;
    a[A].push_back(B);
    a[B].push_back(A);
  }
  rep(i, 1, n+1) sort(a[i].begin(), a[i].end());
  rep(i, 1, n+1) {
    cout << a[i].size() << " ";
    for(int j:a[i]) {
      cout << j << " ";
    }
    cout << endl;
  }
}