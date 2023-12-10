#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int ans = 0, tmp_no = 0, tmp_log = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            ans = max(ans, tmp_log);
            tmp_log = 0;
            tmp_no = 0;
        } else if (s[i] == '1') {
            if (tmp_no < m) {
                tmp_no++;
            } else {
                tmp_log++;
            }
        } else {
            tmp_log++;
        }
    }

    cout << max(ans, tmp_log) << endl;
}

