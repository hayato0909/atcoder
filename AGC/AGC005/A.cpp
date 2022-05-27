#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    string s; cin >> s;
    int ans = 0;
    int num = 0;
    for(int i=0;i<s.size();i++) {
        if(s[i] == 'S') num++;
        else {
            if(num == 0) ans++;
            else num--;
        }
    }
    cout << ans + num << endl;
}