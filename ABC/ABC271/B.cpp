#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n, q; cin >> n >> q;
    vector<int> a[n];
    int l;
    for(int i=0;i<n;i++) {
        cin >> l;
        for(int j=0;j<l;j++) {
            int b; cin >> b;
            a[i].push_back(b);
        }
    }
    for(int i=0;i<q;i++) {
        int s, t;
        cin >> s >> t;
        cout << a[s-1][t-1] << endl;
    }
}