#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;
    m["Monday"] = 5;
    m["Tuesday"] = 4;
    m["Wednesday"] = 3;
    m["Thursday"] = 2;
    m["Friday"] = 1;
    string s;
    cin >> s;
    cout << m[s] << endl;
}