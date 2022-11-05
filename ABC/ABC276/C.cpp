#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;

typedef long long ll;
typedef pair<int, int> P;

int main(){
  int n; cin >> n;
  vector<int> p(n);
  rep(i, 0, n) cin >> p[i];
  int min = p[n-1];
  int idx = n-2;
  map<int, int> m;
  m[min]++;
  while(idx > -1) {
    if(min < p[idx]) {
      break;
    } else if(min > p[idx]) {
      min = p[idx];
    }
    m[p[idx]]++;
    idx--;
  }
  rep(i, 0, idx) cout << p[i] << " ";
  int tmp = p[idx] - 1;
  while(m[tmp] != 1) tmp--;
  cout << tmp << " ";
  vector<int> v;
  rep(i, idx, n) if(p[i] != tmp) v.push_back(p[i]);
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  for(int i:v) cout << i << " ";
  cout << endl;
}