#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    
    int n = s.size();
    int index1 = -1;
    int index2 = -1;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
            index1 = i;
            break;
        }
    }
    
    for(int i =n - 1; i >= 0 ; i--) {
        if(s[i] == '1') {
            index2 = i;
            break;
        }
    }
   
    if (index1 == -1 || index2 == -1) {
        cout << 0 << endl;
        return;
    }
     int count = 0;
    for(int i = index1 ; i <= index2 ; i++) {
        if(s[i] == '0') {
            count++;
        }
    }
    cout<<count<<endl;
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
