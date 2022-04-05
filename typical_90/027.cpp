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
    int n;
    cin >> n;
    map<string, int> name;

    for(int i=1;i<=n;i++) {
        string s;
        cin >> s;
        if(name[s] == 0) cout << i << endl;
        name[s]++;
    }
    return 0;
}