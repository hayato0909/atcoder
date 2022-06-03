#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r; cin >> n >> r;
    string s; cin >> s;
    int last = s.size() - 1;
    while(last >= 0 && s[last] == 'o') last--;
    if(last == -1) {
        cout << "0" << endl;
        return 0;
    }
    last -= r - 1;
    last = max(last, 0);
    int ans = 0;
    for(int i=0;i<last;i++) {
        if(s[i] == 'o') {
            ans++;
        } else {
            ans++;
            for(int j=0;j<r;j++) {
                if(i+j >= s.size()) break;
                s[i+j] = 'o';
            }
            ans++;
        }
    }
    cout << ans + 1 << endl;
}