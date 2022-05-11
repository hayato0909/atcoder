#include <iostream>
#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
using namespace std;

void push(int n) {
    if(n == 1) cout << "1 ";
    else {
        push(n-1);
        cout << n << " ";
        push(n-1);
    }
}

int main() {
    int n;
    cin >> n;
    push(n);
    cout << endl;
}
