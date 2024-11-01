#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int ans = 0;
    while(n != 0) {
        string s = "";
        cin>>s;
        if(s == "Tetrahedron") {
            ans += 4;
        }else if(s== "Cube") {
            ans += 6;
        }else if(s== "Dodecahedron") {
            ans += 12;
        }else if(s == "Icosahedron") {
            ans += 20;
        }else{
            ans += 8;
        }
        n--;
    }
    cout<<ans<<endl;
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
