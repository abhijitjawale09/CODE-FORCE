#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    if(islower(s[0])) {
        s[0] = toupper(s[0]);
    }
    cout<<s<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
