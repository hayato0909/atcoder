#include <bits/stdc++.h>
using namespace std;

int main() {
    const double pai = 3.14159265359;
    double x, y, d;
    cin >> x >> y >> d;
    double ax, ay;
    double s = d * pai / 180;
    ax = x * cos(s) - y * sin(s);
    ay = x * sin(s) + y * cos(s);
    printf("%.10f %.10f\n", ax, ay);
}