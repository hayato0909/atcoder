#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n; cin >> n;
    int l = 1, r = n;
    int x = 1, y = 1;
    int cnt = 0;
    while(cnt < 20) {
        if(r - l <= 1) {
            cnt++;
            cout << "? " << l << " " << l << " 1 " << n << endl;
            int tmp;
            cin >> tmp;
            if(tmp == 0) x = l;
            else x = r;
            break;
        } else {
            int mid = (l + r) / 2;
            cnt++;
            cout << "? " << l << " " << mid << " 1 " << n << endl;
            int tmp;
            cin >> tmp;
            if(tmp == mid - l + 1) l = mid+1;
            else r = mid;
        }
    }

    l = 1;
    r = n;
    while(cnt < 20) {
        if(r - l <= 1) {
            cnt++;
            cout << "? 1 " << n << " " << l << " " << l << endl;
            int tmp;
            cin >> tmp;
            if(tmp == 0) y = l;
            else y = r;
            break;
        } else {
            cnt++;
            int mid = (l + r) / 2;
            cout << "? 1 " << n << " " << l << " " << mid << endl;
            int tmp;
            cin >> tmp;
            if(tmp == mid - l + 1) l = mid+1;
            else r = mid;
        }
    }
    cout << "! " << x << " " << y << endl;
}