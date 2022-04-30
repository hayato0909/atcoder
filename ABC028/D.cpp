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
    ll n, k;
    cin >> n >> k;
    ll cnt = 0;
    cnt += (k - 1) * (n - k) * 6;
    cnt += ((k - 1) + (n - k)) * 3;
    cnt++;

    double ans = (double)cnt/(double)(n*n*n);
    printf("%.11f\n",ans);
}