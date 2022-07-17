#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    string s; cin >> s;
    map<char, int> m;
    for(int i=0;i<3;i++) m[s[i]]++;
    for(int i=0;i<3;i++) {
        if(m[s[i]] == 1 ) {
            cout << s[i] << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
}