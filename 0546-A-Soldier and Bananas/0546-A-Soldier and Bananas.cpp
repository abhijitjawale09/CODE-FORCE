#include<bits/stdc++.h>
using namespace std;

void solve() {
    long k , n ,w;
    cin>>k;
    cout<<" ";
    cin>>n;
    cout<<" ";
    cin>>w;
    long borrow = 0;
    long  result = 0;
    for(int i = 1; i <= w; i++) {
        result = result +  i*k;
        
    }
    
    
       borrow =  max(0L, result - n);
    
    cout<<borrow<<endl;
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
