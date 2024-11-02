#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    
    unordered_set<char> st;
    int n = s.size();
    for(int i = 0; i < n; i++) {
        st.insert(s[i]);
    }
    int m = st.size();
    if(m % 2  == 0) {
        cout<<"CHAT WITH HER!"<<endl;
    }else {
        cout<<"IGNORE HIM!"<<endl;
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
