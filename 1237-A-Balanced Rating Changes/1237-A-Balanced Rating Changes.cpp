#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);  // a = original array, b = result array
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i] / 2;  // Initially take floor(a[i]/2)
        sum += b[i];
    }

    // Adjust balance if sum != 0
    for (int i = 0; i < n && sum != 0; i++) {
        if (a[i] % 2 != 0) { // Adjust only for odd numbers
            if (sum < 0 && a[i] > 0) {
                b[i]++;  // Round up if sum is negative and number is positive
                sum++;
            } else if (sum > 0 && a[i] < 0) {
                b[i]--;  // Round down if sum is positive and number is negative
                sum--;
            }
        }
    }

    // Output the result
    for (int i = 0; i < n; i++) {
        cout << b[i] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
