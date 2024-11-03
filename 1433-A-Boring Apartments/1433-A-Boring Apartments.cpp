#include<bits/stdc++.h>
using namespace std;

void solve() {
    int house;
    cin>>house;
    
    
    int bore = 0;
    for(int i = 1; i <= 9; i++) {
       int temp = 0;
       for(int j =1; j <= 4 ; j++) {
           temp = temp*10 + i;
           bore += j;
           if(temp == house) {
               cout<<bore<<endl;
               return;
           }
       }
    
    }
    
    cout<<bore<<endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
