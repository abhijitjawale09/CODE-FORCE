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
    int n , k;
    
    cin>>n>>k;
    
    vector<int> freq(k + 1 , 0);
    
    for(int i = 0; i< n; i++) {
        int drink;
        cin>>drink;
        freq[drink]++;
    }
    
    int maxx = 0;
    int av = (n + 1)/2;
    int leftover = 0;
    
    for(int i = 1; i <= k; i++) {
        int pair = freq[i] /2;
        int left = freq[i] % 2;
        
        
        maxx += pair *2;
        av -= pair;
        
        
        leftover += left;
        
     }
     
     maxx += min(av , leftover);
     
     cout<<maxx<<endl;
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
