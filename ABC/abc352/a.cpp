#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int a = 0;
    int tmp;
    for (int i = 0; i < 9; i++) {
        cin >> tmp;
        a += tmp;
    }
    int b = 0;
    for (int i = 0; i < 8; i++) {
        cin >> tmp;
        b += tmp;
    }
    cout << a - b + 1 << endl;
}