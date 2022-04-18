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

typedef pair<int, int> P;

int main() {
    int n; cin >> n;
    vector<int> rate;
    int num[100001][4] = {};
    int r[n+1], h[n+1];
    for(int i=1;i<=n;i++) {
        cin >> r[i] >> h[i];
        rate.push_back(r[i]);
        num[r[i]][h[i]-1]++;
    }
    sort(rate.begin(), rate.end());
    int win, draw, lose;
    for(int i=1;i<=n;i++) {
        win = 0, draw = -1, lose = 0;
        int idx = lower_bound(rate.begin(), rate.end(), r[i]) - rate.begin();
        win += idx;
        idx = upper_bound(rate.begin(), rate.end(), r[i]) - rate.begin();
        lose += n - idx;
        win += num[r[i]][h[i]%3];
        draw += num[r[i]][h[i]-1];
        lose += num[r[i]][(h[i]+1)%3];
        cout << win << " " << lose << " " << draw << endl;
    }
}