#include <bits/stdc++.h>
using namespace std;

bool same(string a, string b) {
    if(a.size() != b.size()) return false;
    bool ans = true;
    for(int i=0;i<a.size();i++) {
        if(a[i] != b[i]) ans = false;
    }
    return ans;
}

bool compare(string a, string b) {
    if(a.size() > b.size()) return true;
    else if(a.size() < b.size()) return false;
    else {
        for(int i=0;i<a.size();i++) {
            if(a[i] > b[i]) return true;
            else if(a[i] < b[i]) return false;
        }
        return true;
    }
}

int main() {
    int n; cin >> n;
    string s;

    for(int cnt=0;cnt<n;cnt++) {
        cin >> s;
        int max, len=s.size();
        bool flag = false;
        bool first = true;
        string a = "", b = "";
        string ans;
        for(int i=s.size()/2;i>0;i--) {
            if(len % i == 0) {
                if(first) {
                    first = false;
                    long long tmp = 0;
                    for(int j=0;j<i;j++) tmp = tmp*10 + (s[j] - '0');
                    tmp--;
                    string aa = to_string(tmp);
                    if(aa != "0") for(int j=0;j<len/i;j++) ans += aa;
                    string ans2;
                    for(int i=0;i<s.size()-1;i++) ans2 += '9';
                    if(compare(ans2, ans)) ans = ans2;
                }
                a = "";
                for(int j=0;j<i;j++) a += s[j];
                string ans2;
                for(int j=0;j<len/i;j++) {
                    ans2 += a;
                }
                if(compare(s, ans2)) {
                    if(compare(ans2, ans)) ans = ans2;
                }
            }
        }
        cout << ans << endl;
    }
} 