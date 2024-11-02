#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    
    int n = s.size();
    int one = 0;
    int two = 0;
    int three = 0;
    
    for(int i = 0; i < n; i += 2) {
        if(s[i] == '1') {
            one++;
        }else if(s[i] == '2') {
            two++;
        }else{
            three++;
        }
    }
    
    int index = 0;
    for (int i = 0; i < one; i++) s[index++] = '1', s[index++] = '+';
    for (int i = 0; i < two; i++) s[index++] = '2', s[index++] = '+';
    for (int i = 0; i < three; i++) s[index++] = '3', s[index++] = '+';

    if (!s.empty() && s.back() == '+') s.pop_back();
    
        cout<<s<<endl;
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
