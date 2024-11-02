#include<bits/stdc++.h>
using namespace std;

void solve() {
    long a , b;
    cin>>a>>b;
    
    int year = 0;
    
    
    while(a <= b){
        a *= 3;
        b *= 2;
        year++;
    }
    cout<<year<<endl;
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
