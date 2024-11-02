#include<bits/stdc++.h>
using namespace std;

void solve() {
    long n;
    cin>>n;
    long long arr[n];
    
    int count = 0;
    int temp = 1;
    cin>>arr[0];
    long prev = arr[0];
    for(int i = 1; i < n; i++) {
        cin>>arr[i];
        if(prev < arr[i]) {
            temp++;
        }else{
            
            count = max(count , temp);
            temp = 1;
        }
        prev = arr[i];
        
    }
     count = max(count, temp); 
    cout<<count<<endl;
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
