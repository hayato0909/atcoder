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
     double x,y;
     cin >> x >> y;
     double kakudo = atan(y/x);
     printf("%.8f %.8f\n",cos(kakudo),sin(kakudo));
}