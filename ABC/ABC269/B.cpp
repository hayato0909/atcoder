#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main() {
    string s[10];
    for(int i=0;i<10;i++) cin >> s[i];
    int a = 0;
    while(1) {
        if(s[a] != "..........") break;
        a++;
    }
    int b = 0;
    while(1) {
        if(s[a][b] == '#') break;
        b++;
    }
    int c = b;
    while(c != 10) {
        if(s[a][c] == '.') break;
        c++;
    }
    int d = a;
    while(d != 10) {
        if(s[d] == "..........") break;
        d++;
    }
    cout << a+1 << " " << d << endl;
    cout << b+1 << " " << c << endl;
}