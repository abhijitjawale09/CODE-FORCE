#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n , k;
    cin>>n;
    int arr[n  + 1];
    
    for(int i = 1 ; i <= n; i++) {
        cin>>k;
        
        arr[k] = i;
    }

    
    for(int i = 1; i <= n; i++) {
        cout<<arr[i]<<" ";
    }
    
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
