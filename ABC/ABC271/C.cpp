#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> a;
    map<int, int> M;
    int nn;
    map<int, int> m;
    int cnt = 0;
    for(int i=0;i<n;i++) {
        cin >> nn;
        if(m[nn] == 0) {
            M[nn]++;
            m[nn]++;
            a.push_back(nn);
        } else {
            cnt++;
        }
    }
    sort(a.begin(), a.end());

    int ans = 0;
    int idx = a.size() - 1;
    while(1) {
        if(M[ans+1] != 0) ans++;
        else {
            if(cnt >= 2) {
                cnt -= 2;
                ans++;
            } else {
                if(idx == 0) {
                    if(cnt >= 1 && a[idx] > ans + 1) {
                        M[a[idx]] = 0;
                        ans++;
                        idx--;
                    } else break;
                } else if(idx < 0) break;
                else {
                    if(cnt >= 1) {
                        if(a[idx] > ans + 1) {
                            M[a[idx]] = 0;
                            ans++;
                            idx--;
                            cnt--;
                        } else break;
                    } else {
                        idx--;
                        if(a[idx] >= ans + 1) {
                            ans++;
                            idx--;
                            M[a[idx+1]] = 0;
                            M[a[idx+2]] = 0;
                        } else {
                            break;
                        }
                    }
                }
            }
        }
    }
    while(M[ans+1] != 0) ans++;
    cout << ans << endl;
}