#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    cin >> n;

    int prev_height, curr_height;
    cin >> prev_height; // Read the first pylon height

    int min_money = prev_height; // Initial money required to reach the first pylon
    int curr_energy = 0;

    for (int i = 1; i < n; i++) {
        cin >> curr_height;

        curr_energy += prev_height - curr_height;

        if (curr_energy < 0) { // If energy goes negative, we need more initial money
            min_money += abs(curr_energy);
            curr_energy = 0;
        }

        prev_height = curr_height; // Move to the next pylon
    }

    cout << min_money << endl;
}

int main() {
    fast_io();
    solve();
    return 0;
}
