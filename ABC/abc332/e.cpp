#include <bits/stdc++.h>
using namespace std;

int n, d;
vector<int> w;

double calc(vector<int> v) {
    while(v.size() < d) v.push_back(0);
    double sum = 0;
    for (int i = 0; i < d; i++) {
        sum += (double)v[i];
    }
    double ave = sum / (double)n;
    double ans = 0;
    for (int i = 0; i < d; i++) {
        ans += ((double)v[i] - ave) * ((double)v[i] - ave);
    }
    return ans / (double)d;
}

double solve(vector<int> v, vector<int> res, int check, int num) {
    if (num == 0) {
        return calc(v);
    }
    if (check == n) {
        return calc(v);
    }

    int now = 0;
    vector<int> tmp;
    tmp = v;
    double ans = 1000000000.0;
    for (int i = check; i < n; i++) {
        for (int j = 1; j <= (1 << res.size()); j++) {
            vector<int> next;
            int sum = 0;
            if (j & (1 << i)) {
                sum += w[i];
            } else {
                next.push_back(w[i]);
            }
            tmp.push_back(sum);
            ans = min(ans, solve(tmp, next, i + 1, num - 1));
        }
    }
    return ans;
}

int main() {
    cin >> n >> d;
    w.resize(n);
    for (int i = 0; i < n; i++) cin >> w[i];
    sort(w.begin(), w.end());
    vector<int> v;
    cout << solve(v, w, 0, d) << endl;
}
