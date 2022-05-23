#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int k; cin >> k;
    map<string, int> m;
    vector<string> v;

    for(int i=0;i<s.size();i++) {
        string tmp;
        for(int j=0;j<=4;j++) {
            if(i+j >= s.size()) break;
            tmp += s[i+j];
            if(m[tmp] == 0) v.push_back(tmp);
            m[tmp]++;
        }
    }
    sort(v.begin(), v.end());
    cout << v[k-1] << endl;
}