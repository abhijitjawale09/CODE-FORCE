#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    string vowels = "AEIOUYaeiouy";
    string ans = "";

    for (char c : s) {
        if (vowels.find(c) == string::npos) {
            ans += '.';
            ans += tolower(c);
        }
    }
    
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
