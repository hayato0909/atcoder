#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k, g, m;
    long long glace = 0, mag =0;
    cin >> k >> g >> m;

    for (int i = 0; i < k; i++) {
        if (glace == g) {
            glace = 0;
        } else if (mag == 0) {
            mag = m;
        } else {
            if (mag + glace < g) {
                glace += mag;
                mag = 0;
            } else {
                mag -= (g - glace);
                glace = g;
            }
        }
    }
    cout << glace << " " << mag << endl;
}

