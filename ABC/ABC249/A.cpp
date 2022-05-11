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

int main(){
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int len1, len2;
    len1 = (x / (a + c)) * a * b;
    len1 += b * min(a, x%(a+c));
    len2 = (x / (d + f)) * d * e;
    len2 += e * min(d, x%(d+f));

    if(len1 == len2) cout << "Draw" << endl;
    else if(len1 < len2) cout << "Aoki" << endl;
    else cout << "Takahashi" << endl;
}