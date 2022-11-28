#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;

int main(){
    string s, t; cin >> s >> t;
    int len = s.size();
    bool fin = true;
    for(int start=0;fin;start++) {
        bool flag = true;
        for(int i=0;i<t.size();i++) {
            if(i+start >= s.size()) {
                flag = false;
                fin = false;
                break;
            }
            if(s[start+i] != t[i]) flag = false;
        }
        if(flag) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}