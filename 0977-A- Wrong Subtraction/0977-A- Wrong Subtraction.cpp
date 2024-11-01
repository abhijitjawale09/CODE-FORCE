#include<bits/stdc++.h>
using namespace std;

void solve() {
    long n ;
    cin>>n;
    int k ;
    cin>>k;
    while(k != 0) {
        int last = n % 10;
        
        if(last == 0) {
            n = n / 10;
        }else {
            n--;
        }
        k--;
    }
    cout<<n<<endl;
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
