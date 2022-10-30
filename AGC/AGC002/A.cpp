#include <bits/stdc++.h>
using namespace std;

#define rep(i, N, M) for(int i=N;i<M;i++)

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;


int main(){
    int a, b; cin >> a >> b;
    int num;
    if(a > 0) cout << "Positive" << endl;
    else if(a <= 0 && b >= 0) cout << "Zero" << endl;
    else {
        num = b - a + 1;
        if(num % 2 == 0) cout << "Positive" << endl;
        else cout << "Negative" << endl;
    }
}
