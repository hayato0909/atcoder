#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;


const ll mod = 1000000007;

int day(int y, int m, int d) {
    return 365*y+(y/4)-(y/100)+(y/400)+(306*(m+1)/10)+d-429;
}

int main() {
    int y, m, d; cin >> y >> m >> d;
    if(m <= 2) {
        m += 12;
        y--;
    }
    cout << day(2014, 5, 17) - day(y, m, d) << endl;
}