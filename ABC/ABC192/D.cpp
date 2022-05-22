#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string x;
ll m;

bool check(ll n) {
    ll M = m;
    vector<ll> y;
    while(M > 0) {
        y.push_back(M % n);
        M /= n;
    }
    reverse(y.begin(), y.end());

    if(x.size() < y.size()) return true;
    else if(x.size() > y.size()) return false;

    for(int i=0;i<x.size();i++) {
        ll tmpx = x[i] - '0';
        ll tmpy = y[i];

        if(tmpx == tmpy) continue;
        else if(tmpx < tmpy) return true;
        else return false;
    }
    return true;
}

int main() {
    cin >> x;
    cin >> m;
    ll l = 0;
    if (x.length() == 1) {
        ll tmpx = stoll(x);
        if(tmpx <= m) cout << "1" << endl;
        else cout << "0" << endl;
        return 0;
    }

    for(int i=0;i<x.size();i++) {
        if(l < x[i] - '0') l = x[i] - '0';
    }
    ll d = l;
    ll r = m + 1;
    while(r - l > 1) {
        ll mid = (l + r) / 2;
        if(check(mid)) l = mid;
        else r = mid;
    }
    cout << max((ll)0, l-d) << endl;
}