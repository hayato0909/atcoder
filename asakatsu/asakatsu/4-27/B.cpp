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

typedef long long ll;

int main() {
    string a; cin >> a;
    ll b; cin >> b;
    ll len = a.size();
    ll idx = b % len;
    if(idx == 0) idx = len - 1;
    else idx--;
    cout << a[idx] << endl;
}