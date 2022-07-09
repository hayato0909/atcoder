#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    map<int, vector<int> > M;
    int m[n+1];
    vector<int> p[n+1], e[n+1];
    for(int i=1;i<=n;i++) {
        cin >> m[i];
        for(int j=0;j<m[i];j++) {
            int tmpp, tmpe; cin >> tmpp >> tmpe;
            p[i].push_back(tmpp);
            e[i].push_back(tmpe);
            if(M[p[i][j]].size() == 0) M[p[i][j]].push_back(e[i][j]);
            else if(M[p[i][j]].size() == 1) {
                M[p[i][j]].push_back(e[i][j]);
                if(M[p[i][j]][0] > M[p[i][j]][1]) swap(M[p[i][j]][0], M[p[i][j]][1]);
            } else {
                if(M[p[i][j]][1] < e[i][j]) {
                    M[p[i][j]][0] = M[p[i][j]][1];
                    M[p[i][j]][1] = e[i][j];
                } else if(M[p[i][j]][0] < e[i][j]) M[p[i][j]][0] = e[i][j];
            }
        }
    }

    int ans = 0;
    for(int i=1;i<=n;i++) {
        bool cheak = true;
        for(int j=0;j<m[i];j++) {
            if(M[p[i][j]].size() == 1) cheak = false;
            else if(M[p[i][j]][1] == e[i][j] && M[p[i][j]][0] != e[i][j]) cheak = false;
        }
        if(!cheak) ans++;
    }
    cout << min(ans+1, n) << endl;
}