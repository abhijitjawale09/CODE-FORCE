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
    ll n, m ,k;
    cin>>n>>m>>k;
    
    if(m == 0) {
        cout<<"0"<<endl;
        return;
    }
    ll c = n /k;
    
    if(c >= m) {
        cout<<m<<endl;
    }else{
        ll rem = m - c;
        ll other = ceil(1.0* rem / (k-1));
        cout<<c-other<<endl;
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
