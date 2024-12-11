#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
#define endl "\n"
#define nl "\n"

const int MOD = 1e9 + 7;
const ll INF = 1e18;
const ld PI = acos(-1.0);

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}


//----------------------------------Solution code here-----------------------------//
void abhijitjawale09() {
   int n , m;
   cin>>n>>m;
   int count = 0;
   int arr[n][m];
   
   vector<string> grid(n);
   
   for(int i =0; i < n; i++) {
       cin>>grid[i];
   }
   
   for(int j = 0; j < m -1 ; ++j) {
       if(grid[n - 1][j] != 'R') {
           count++;
       }
   }
    for(int j = 0; j < n -1 ; ++j) {
       if(grid[j][m-1] != 'D') {
           count++;
       }
   }
   cout<<count<<endl;
}

int main() {
    fast_io();
    int t = 1;
    cin >> t;
    while (t--) {
        abhijitjawale09();
    }
    return 0;
}