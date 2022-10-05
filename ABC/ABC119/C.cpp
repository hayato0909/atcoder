#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int flag[9];
int n, a, b, c;
int l[9];
int ans = 100000000;

void dfs(int num) {
    if(num == n + 1) {
        int aa = 0, bb = 0, cc = 0;
        int A = 0, B = 0, C = 0;
        int tmp = 0;
        for(int i=0;i<=n;i++) {
            if(flag[i] == 0) continue;
            else if(flag[i] == 1) A += l[i], aa++;
            else if(flag[i] == 2) B += l[i], bb++;
            else if(flag[i] == 3) C += l[i], cc++;
        }
        if(aa == 0 || bb == 0 || cc == 0) return;

        tmp += (aa - 1) + (bb - 1) + (cc - 1);
        tmp *= 10;
        tmp += abs(A - a) + abs(B - b) + abs(C - c);
        ans = min(ans, tmp);
    } else {
        for(int i=0;i<=3;i++) {
            flag[num] = i;
            dfs(num + 1);
        }
    }
}

int main() {
    cin >> n >> a >> b >> c;
    for(int i=1;i<=n;i++) cin >> l[i];
    dfs(1);
    cout << ans << endl;    
}