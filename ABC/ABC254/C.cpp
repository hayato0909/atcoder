#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin >> n >> k;
    int a[n+1], ans[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    vector<int> v;
    for(int i=1;i<=k;i++) {
        //while(v.size() != 0) v.pop_back();
        for(int j=i;j<=n;j+=k) v.push_back(a[j]);
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        for(int j=i;j<=n;j+=k) {
            ans[j] = v.back();
            v.pop_back();
        }
    }
    string flag = "Yes";
    for(int i=2;i<=n;i++) {
        if(ans[i-1] > ans[i]) flag = "No";
    }
    cout << flag << endl;
}