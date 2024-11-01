#include<bits/stdc++.h>
using namespace std;

void solve() {
    int  n;
    cin>>n;
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        if(arr[i] == 1) {
            cout<<"HARD"<<endl;
            return;
        }
    }
    cout<<"EASY"<<endl;
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
