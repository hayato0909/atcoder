#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

vector<string> s;
int h, w;
vector<vector<int> > num;

void dfs(int a, int b) {
  int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
  queue<P> q;
  q.push(P(a, b));
  num[a][b] = 1;
  while(!q.empty()) {
    int x = q.front().first, y = q.front().second;
    q.pop();
    rep(i, 0, 4) {
      int xx = x + dx[i], yy = y + dy[i];
      if(0 <= xx && xx < h && 0 <= yy && yy < w) {
        if(num[xx][yy] == -1 && s[xx][yy] != '#') {
          num[xx][yy] = num[x][y] + 1;
          q.push(P(xx, yy));
        }
      }
    }
  }
}

int main(){
  cin >> h >> w;
  num.resize(h, vector<int>(w));
  s.resize(h);
  string c;
  rep(i, 0, h) {
    cin >> s[i];
  }
  int sx = 0, sy = 0;
  rep(i, 0, h) {
    rep(j, 0, w) {
      if(s[i][j] == 'S') {
        sx = i;
        sy = j;
        break;
      }
    }
  }
  int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
  rep(i, 0, h) rep(j, 0, w) num[i][j] = -1;
  num[sx][sy] = 0;

  rep(i, 0, 4) {
    int xx = sx + dx[i], yy = sy + dy[i];
    if(0 <= xx && xx < h && 0 <= yy && yy < w) {
      if(num[xx][yy] >= 3 && s[xx][yy] != '#') {
        cout << "Yes" << endl;
        return 0;
      } else if(num[xx][yy] == -1 && s[xx][yy] != '#') {
        dfs(xx, yy);
      }
    }
  }
  cout << "No" << endl;
}