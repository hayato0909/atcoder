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

typedef long long ll;
typedef pair<ll, ll> p;

int main() {
    ll n,d;
    cin >> n >> d;
    ll l[n+1],r[n+1];
    vector<p> wall;
    for(int i=1;i<=n;i++) {
        cin >> l[i] >> r[i];
        wall.push_back(p(r[i], l[i]));
    }
    sort(wall.begin(), wall.end());

    int ans = 0;
    for(int i=0;i<n;) {
        ll punch = wall[i].first;
        ans++;
        i++;
        while(i<n && wall[i].second<=punch+d-1) i++;
            
    }
    cout << ans << endl;
}