#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int sum = 0;
    int n; cin >> n;
    int a;
    for(int i=0;i<n;i++) {
        cin >> a;
        sum += a;
    }
    cout << sum << endl;
}