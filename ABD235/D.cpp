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


int main() {
    int a, n;
    cin >> a >> n;
    int ans = -1;
    queue<int> Q;
    map<int, int> cnt;
    Q.push(1);
    cnt[1] = 0;
    int rank = 1;
    while(n >= rank) rank = rank * 10;

    while(!Q.empty()) {
        int i = Q.front(); Q.pop();
        int next = i * a;
        int len = 1;
        while(len <= i) len = len * 10;
        len = len / 10;
        if(next == n) {
            cout << cnt[i] + 1 << endl;
            return 0;
        } else if(cnt[next] == 0 && next < rank) {
            Q.push(next);
            cnt[next] = cnt[i] + 1;
        }
        if(i>=10 && i%10 != 0) {
            int tmp = i % 10;
            next = i / 10 + tmp * len;
            if(next == n) {
                cout << cnt[i] + 1 << endl;
                return 0;
            } else if(cnt[next] == 0 && next < rank) {
                Q.push(next);
                cnt[next] = cnt[i] + 1;
            }
        }
    }
    cout << "-1" << endl;
}