#include<bits/stdc++.h>
using namespace std;

void solve() {
    int arr[5][5];
    int a , b;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin>>arr[i][j];
            if(arr[i][j] == 1){
                a = i;
                b = j;
            }
        }
    }
    int x = 0;
    x += abs(2 - a);
    x += abs(2 - b);
   
    
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
