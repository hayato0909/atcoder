#include <iostream>
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
    int n, a, b; cin >> n >> a >> b;
    bool flag = true;
    for(int i=1;i<=n*a;i++) {
        string s;
        bool c = flag;
        for(int j=1;j<=n*b;j++) {
            if(c) s += ".";
            else s += "#";
            if(j % b == 0) c = !c;
        }
        if(i % a == 0) flag = !flag;
        cout << s << endl;
    }
}