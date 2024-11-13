#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;
    
    if (m % n != 0) {  
        cout << -1 << endl;
        return;
    }
    
    long long r = m / n;  
    int count = 0;
    
    while (r % 2 == 0) {
        r /= 2;
        count++;
    }
    while (r % 3 == 0) {
        r /= 3;
        count++;
    }
    if (r == 1) {
        cout << count << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
