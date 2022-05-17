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
    int n,x;
    cin >> n >> x;
    int check[n+1];
    for(int i=1;i<=n;i++) check[i] = 0;
    if(n % 2 == 1) {
        if((n + 1)/2 == x) {
            bool flag = false;
            for(int i=1;i<=n;i++) {
                cout << x << " ";
                if(flag) x += i;
                else x -= i;
                flag = !flag;
            }
        } else {
            bool flag;
            cout << x << " ";
            check[x]++;
            if(x > (n + 1) / 2) flag = false;
            else flag = true;
            x = (n + 1) / 2;
            for(int i=1;i<=n;i++) {
                cout << x << " ";
                check[x]++;
                if(flag) x += i;
                else x -= i;
                if(check[x] != 0) {
                    if(flag) x++;
                    else x--;
                    i++;
                }
                flag = !flag;
            }
        }
    } else {
        if(n / 2 == x || n / 2 + 1 == x) {
            bool flag;
            if(n / 2 == x) flag = true;
            else flag = false;
            for(int i=1;i<=n;i++) {
                cout << x << " ";
                if(flag) x += i;
                else x -= i;
                flag = !flag;
            }
        } else {
            bool flag = false;
            cout << x << " ";
            check[x]++;
            if(x < n / 2) {
                x = n / 2 + 1;
                flag = false;
            } else {
                x = n / 2;
                flag = true;
            }
            for(int i=1;i<=n;i++) {
                cout << x << " ";
                check[x]++;
                if(flag) x += i;
                else x -= i;
                if(check[x] != 0) {
                    if(flag) x++;
                    else x--;
                    i++;
                }
                flag = !flag;
            }
        }
    }
    cout << endl;
}