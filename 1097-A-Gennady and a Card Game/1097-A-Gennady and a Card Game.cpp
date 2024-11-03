#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    
    
    string ss[5];
    for(int i = 0; i < 5; i++) {
        cin>>ss[i];
    }
    
    for(int i = 0;i < 5; i++) {
        string ws = ss[i];
        
         if(s[0] == ws[0] || s[1] == ws[1]) {
             cout<<"YES"<<endl;
             return;
         }
         
    }
    cout<<"NO"<<endl;
    
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
