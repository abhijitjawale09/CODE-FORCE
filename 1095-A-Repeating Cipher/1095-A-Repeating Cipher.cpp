#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,k = 3;
    string s,t;
    cin>>n>>s;
    if(n >= 2){
        t += s[0];
        t += s[1];
    }
    else{
        t += s[0];
    }
    for(int i=3; i<n;){
        t += s[i];
        i += k;
        k++;
    }
    cout<<t<<endl;
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
