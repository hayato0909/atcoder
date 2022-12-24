#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, ll> P;

const ll mod = 998244353;


int main() {
    string s; cin >> s;
    deque<vector<char>> q;
    map<char, int> m;
    vector<char> now;

    rep(i, 0, s.size()) {
        if(s[i] == '(') {
            q.push_back(now);
            now.clear();
        } else if(s[i] == ')') {
            for(char c:now) {
                m[c]--;
            }
            now = q.back(); q.pop_back();
        } else {
            if(m[s[i]] != 0) {
                cout << "No" << endl;
                return 0;
            } else {
                m[s[i]]++;
                now.push_back(s[i]);
            }
        }
    }
    cout << "Yes" << endl;
}