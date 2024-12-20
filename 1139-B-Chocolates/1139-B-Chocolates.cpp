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
    ll n; 
    cin>>n;
    int arr[n];
    for(ll i = 0 ; i < n; i++) {
        cin>>arr[i];
    }
    ll totalchocolate = 0;
    ll prev = MOD;
    for(int i = n-1; i >= 0; i--) {

        if (arr[i] >= prev) {
            arr[i] = max(0LL, prev - 1);
        }
        totalchocolate += arr[i]; 
        prev = arr[i];
    }
    cout<<totalchocolate<<endl;
    
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
