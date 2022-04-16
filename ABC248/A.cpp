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

int main(){
    string s;
    cin >> s;
    map<int, int> n;
    for(int i=0;i<=8;i++) {
        int tmp = s[i] - '0';
        n[tmp]++;
    }
    for(int i=0;i<=9;i++) {
        if(n[i] == 0) cout << i << endl;
    }
}