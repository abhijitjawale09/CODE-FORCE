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
    
    ll x , y , z;
    
    cin>>x>>y>>z;
    
    int M = max({x , y , z});
    
    int count = (x == M) + (y == M ) + (z == M);
    
    if(count < 2) {
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        if (x == M && y == M) {
            cout << x << " " << z << " " << z << endl;
        } else if (x == M && z == M) {
            cout << x << " " << y << " " << y << endl;
        } else if (y == M && z == M) {
            cout << y << " " << x << " " << x << endl;
        }
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
