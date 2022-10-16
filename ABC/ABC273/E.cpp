#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;

typedef long long ll;
typedef pair<int, int> P;

struct Node {
    int par, val;
    Node(int p, int v) {
        par = p;
        val = v;
    }
};

int main(){
    int q; cin >> q;
    string s;
    int x;
    map<int, int> m;
    int now = 0;
    vector<Node> v;
    v.push_back(Node(0, -1));

    rep(i, 0, q) {
        cin >> s;
        if(s == "ADD") {
            cin >> x;
            v.push_back(Node(now, x));
            now = v.size() - 1;
        } else if(s == "DELETE") {
            now = v[now].par;
        } else if(s == "SAVE") {
            cin >> x;
            m[x] = now;
        } else if(s == "LOAD") {
            cin >> x;
            now = m[x];
        }
        cout << v[now].val << " ";
    }
    cout << endl;
}