#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int x = 0;
    int n;
    cin>>n;
    
    for(int i = 0; i< n ; i++) {
        string s;
        cin>>s;
        if(s == "X++" || s == "++X") {
            x += 1;
        }else if(s == "X--" || s == "--X") {
            x += -1;
        }
    }
    cout<<x<<endl;
    
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
