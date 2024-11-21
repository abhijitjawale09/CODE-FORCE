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
    ll n , k, c;
    cin>>n>>k;
    
    vector<pair<int , int>> v;
    
    for(int i = 1 ; i <= n ;i++) {
        cin>>c;
        v.push_back({c , i});
    }
    sort(v.begin() , v.end());
    
    vector<int> ans;
    int total = 0;
    
    for(auto &in : v) {
        if(k >= in.first) {
            k -= in.first;
            ans.push_back(in.second);
            total++;
        }else {
            break;
        }
    }
    
    cout<<total<<endl;
    
    for(int i : ans) {
        cout<<i << " ";
        
    }
    
    cout<<endl;
    
    
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
