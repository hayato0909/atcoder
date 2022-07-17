#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n,x,y,z; cin >> n >> x >> y >> z;
    vector<P> math, eng, all;
    bool ok[n+1];
    for(int i=1;i<=n;i++) ok[i] = false;
    int num;
    for(int i=1;i<=n;i++) {
        cin >> num;
        math.push_back(P(num, n-i));
    }
    for(int i=1;i<=n;i++) {
        cin >> num;
        eng.push_back(P(num, n-i));
        all.push_back(P(num+math[i-1].first, n-i));
    }
    sort(math.begin(), math.end());
    sort(eng.begin(), eng.end());
    sort(all.begin(), all.end());
    int cnt = 0, j = n-1;
    while(cnt != x) {
        if(!ok[n-math[j].second]) {
            ok[n-math[j].second] = true;
            cnt++;
        }
        j--;
    }
    cnt = 0, j = n-1;
    while(cnt != y) {
        if(!ok[n-eng[j].second]) {
            ok[n-eng[j].second] = true;
            cnt++;
        }
        j--;
    }
    cnt = 0, j = n-1;
    while(cnt != z) {
        if(!ok[n-all[j].second]) {
            ok[n-all[j].second] = true;
            cnt++;
        }
        j--;
    }
    for(int i=1;i<=n;i++) {
        if(ok[i]) cout << i << endl;
    }
}