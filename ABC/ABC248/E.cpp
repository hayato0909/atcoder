#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int x[n+1], y[n+1];
    for(int i=1;i<=n;i++) cin >> x[i] >> y[i];
    int ans = 0, more = 0;
    int flag = 0;

    if(k == 1) cout << "Infinity" << endl;
    else {
        for(int i=1;i<n;i++) {
            for(int j=i+1;j<=n;j++) {
                if(x[i] - x[j] != 0) {
                    int cnt = 0;
                    flag = 0;
                    for(int l=1;l<=n;l++) {
                        if((y[l]-y[i])*(x[i]-x[j]) == (y[i]-y[j])*(x[l]-x[i])) {
                            cnt++;
                            if(l != i && l < j) flag = 1;
                        }
                    }
                    if(cnt >= k) {
                        ans++;
                        more += flag;
                    }
                } else {
                    int cnt = 0;
                    flag = 0;
                    for(int l=1;l<=n;l++) {
                        if(x[i] == x[l]) {
                            cnt++;
                            if(l != i && l < j) flag = 1;;
                        }
                    }
                    if(cnt >= k) {
                        ans++;
                        more += flag;
                    }
                }
            }
        }
        cout << ans - more << endl;
    }
}