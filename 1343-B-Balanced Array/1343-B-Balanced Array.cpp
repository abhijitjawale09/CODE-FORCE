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
   int n;
   cin>>n;
   
   if((n/2)%2 != 0) {
       cout<<"NO"<<endl;
       return;
       
   }
   cout<<"YES"<<endl;
   
   vector<int> result(n);
   
   int even = 2;
   for(int i = 0; i < n / 2; i++) {
       result[i] = even;
       even+= 2;
       
   } 
   int odd = 1;
   
   for(int i = n / 2; i < n - 1; i++) {
       result[i] = odd;
       odd += 2;
   }
   
   result[n-1] = result[n/2 - 1] + (n / 2 - 1);
   
   
   for(int x : result){
       cout<<x<<" ";
   }
   cout<<endl;
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
