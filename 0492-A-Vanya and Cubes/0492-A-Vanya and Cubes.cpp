#include<bits/stdc++.h>
using namespace std;
int sum(int n) {
    return n*(n + 1) /2;
}
void solve() {
    int n;
    cin>>n;
    int level = 0;
    while(true){
        n -= sum(level + 1);
        if(n >= 0) {
            level++;
        }else {
            break;
        }
        
    }
    cout<<level<<endl;
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
