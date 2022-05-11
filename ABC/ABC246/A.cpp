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
     int x[4],y[4];
     for(int i=0;i<3;i++) cin >> x[i] >> y[i];
     int numx,numy;
     for(int i=0;i<3;i++) {
          if(x[i] == x[(i+1)%3]) numx = (i+2)%3;
          if(y[i] == y[(i+1)%3]) numy = (i+2)%3;
     }
     cout << x[numx] << " " << y[numy] << endl;
}