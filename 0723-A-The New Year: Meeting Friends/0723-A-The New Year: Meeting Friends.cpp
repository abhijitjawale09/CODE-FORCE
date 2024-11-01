#include<bits/stdc++.h>
using namespace std;

void solve() {
     int x1, x2, x3;
    std::cin >> x1 >> x2 >> x3;
    int min_val = std::min({x1, x2, x3});
    int max_val = std::max({x1, x2, x3});
    
    int total_distance = max_val - min_val;
    
    std::cout << total_distance << std::endl;
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
