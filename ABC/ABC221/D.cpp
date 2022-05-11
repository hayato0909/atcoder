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
typedef pair<ll, int> P;

int main() {
    int n; cin >> n;
    ll a[n], b[n];
    for(int i=0;i<n;i++) cin >> a[i] >> b[i];
    vector<P> rog;
    map<int, int> num;
    for(int i=0;i<n;i++) {
        rog.push_back(P(a[i], 1));
        rog.push_back(P(a[i]+b[i], -1));
    }
    sort(rog.begin(), rog.end());

    int day = rog[0].first, peo = 1;
    for(int i=1;i<rog.size();i++) {
        num[peo] += rog[i].first - day;
        day = rog[i].first;
        peo += rog[i].second;
    }
    num[peo]++;

    for(int i=1;i<=n;i++) cout << num[i] << " ";
    cout << endl;
}