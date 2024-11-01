#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    int maxIndex = 0, minIndex = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] <= arr[minIndex]) { // last occurrence of the minimum
            minIndex = i;
        }
    }
    int time = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex) {
        time--;  
    }

    cout << time << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
