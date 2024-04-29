#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<ll> r;
    
    for(int i = 0; i < n; i++) {
        r.push_back(a[i]);
        while (r.size() > 1 && r[r.size()-1] == r[r.size()-2]) {
            r.pop_back();
            r[r.size()-1] += 1ll;
        }
    }

    cout << r.size() << endl;
}