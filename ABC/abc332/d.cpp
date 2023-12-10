#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w, 0));
    vector<vector<int>> b(h, vector<int>(w, 0));
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; j++) {
            cin >> b[i][j];
        }
    }

    vector<vector<int>> c(h, vector<int>(w, 0));
    vector<int> tate(h), yoko(w);
    for (int i = 0; i < h; i++) {
        tate[i] = i;
    }
    for (int i = 0; i < w; i++) {
        yoko[i] = i;
    }
    int ans = 1000000000;

    do {
        do {
            for (int i = 0; i < h; i++) {
                for (int j = 0; j < w; j++) {
                    c[i][j] = a[tate[i]][yoko[j]];
                }
            }
            bool flag = true;
            for (int i = 0; i < h; i++) {
                if (c[i] != b[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                int tmp = 0;
                for (int i = 0; i < h; i++) {
                    for (int j = i; j < h; j++) {
                        if (tate[i] > tate[j]) {
                            tmp++;
                        }
                    }
                }
                for (int i = 0; i < w; i++) {
                    for (int j = i; j < w; j++) {
                        if (yoko[i] > yoko[j]) {
                            tmp++;
                        }
                    }
                }
                ans = min(ans, tmp);
            }
        } while (next_permutation(yoko.begin(), yoko.end()));
    } while (next_permutation(tate.begin(), tate.end()));

    if (ans == 1000000000) {
        cout << "-1" << endl;
    } else {
        //cout << "Yes" << endl;
        cout << ans << endl;
    }
}
