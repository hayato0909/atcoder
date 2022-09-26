#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int check[101];
    for(int i=0;i<=100;i++) check[i] = 0;
    int ans = 0;
    int a;
    for(int i=0;i<5;i++) {
        cin >> a;
        if(check[a] == 0) ans++;
        check[a]++;
    }
    cout << ans << endl;
}