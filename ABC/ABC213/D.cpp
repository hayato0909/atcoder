#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;

vector<int> num(200001, -1);
vector<int> v[200000+1];

void dfs(int now, int pre) {
    cout << now << " ";
    for(int i:v[now]) {
        if(i != pre) {
            dfs(i, now);
            cout << now << " ";
        }
    }
}


int main(){
    int n; cin >> n;
    int a, b;
    rep(i, 1, n) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    rep(i, 1, n+1) sort(v[i].begin(), v[i].end());
    num[1] = 0;
    dfs(1, -1);
    cout << endl;
}
