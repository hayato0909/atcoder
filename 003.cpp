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
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=1;i<n;i++) cin >> a[i] >> b[i];
    map<int, vector<int> > road;
    for(int i=1;i<n;i++) {
        road[a[i]].push_back(b[i]);
        road[b[i]].push_back(a[i]);
    }
    int num[n+1];
    for(int i=1;i<=n;i++) num[i] = -1;
    queue<int> q;
    num[1] = 0;
    q.push(1);
    while(!q.empty()) {
        int start = q.front();
        q.pop();
        for(int i=0;i<road[start].size();i++) {
            if(num[road[start][i]] == -1) {
                num[road[start][i]] = num[start] + 1;
                q.push(road[start][i]);
            }
        }
    }
    int max = 0,max_id;
    for(int i=1;i<=n;i++) {
        if(max < num[i]) {
            max = num[i];
            max_id = i;
        }
    }

    while(!q.empty()) q.pop();
    for(int i=1;i<=n;i++) num[i] = -1;
    num[max_id] = 0;
    q.push(max_id);
    while(!q.empty()) {
        int start = q.front();
        q.pop();
        for(int i=0;i<road[start].size();i++) {
            if(num[road[start][i]] == -1) {
                num[road[start][i]] = num[start] + 1;
                q.push(road[start][i]);
            }
        }
    }

    max = 0;
    for(int i=1;i<=n;i++) {
        if(max < num[i]) max = num[i];
    }

    cout << max + 1 << endl;
    return 0;
}