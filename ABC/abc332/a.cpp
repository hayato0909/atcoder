#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, k;
    cin >> n >> s >> k;
    vector<int> p(n), q(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i] >> q[i];
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += p[i] * q[i];
    }
    if (sum < s) sum += k;
    cout << sum << endl;
}
