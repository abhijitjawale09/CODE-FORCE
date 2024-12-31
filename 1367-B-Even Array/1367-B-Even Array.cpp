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
    vi arr(n);
    
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    int even_mismatch = 0;
    int odd_mismatch = 0;
    
    for(int i = 0; i < n ; i++) {
        if(i % 2 == 0  && arr[i] % 2 != 0) {
            even_mismatch++;
        }else if(i % 2 == 1 && arr[i] % 2 != 1){
            odd_mismatch++;
        }
    }
    
    if(even_mismatch == odd_mismatch ) {
        cout<<even_mismatch<<endl;
    }else{
        cout<<-1<<endl;
    }
    
    
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
