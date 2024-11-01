#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n , k ,l , c, d , p , nl ,np ; 
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drink = (k * l) / nl; 
    int total_limes = c * d;    
    int total_salt = p / np;         
    
    int toasts_per_friend = min({total_drink, total_limes, total_salt}) / n;
    
    cout << toasts_per_friend << endl;
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
