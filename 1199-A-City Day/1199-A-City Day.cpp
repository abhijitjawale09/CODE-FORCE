#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void abhijitjawale09() {
    int n, x, y;
    cin >> n >> x >> y;

    vi a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int d = 0; d < n; d++) {
        bool isnotsorainy = true;

        for (int j = max(0, d - (int)x); j < d; j++) {
            if (a[d] >= a[j]) {
                isnotsorainy = false;
                break;
            }
        }

        if (isnotsorainy) {
            for (int j = d + 1; j <= min(n - 1, d + (int)y); j++) {
                if (a[d] >= a[j]) {
                    isnotsorainy = false;
                    break;
                }
            }
        }

        if (isnotsorainy) {
            cout << d + 1 << endl;
            return;
        }
    }
}

int main() {
    fast_io();
    int t = 1;
    //cin >> t;
    while (t--) {
        abhijitjawale09();
    }
    return 0;
}
