#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  if(n % 4 == 2) cout << n << endl;
  else {
    while(n % 4 != 2) n++;
    cout << n << endl;
  }
}