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
    int  n;
    cin>>n;
    
    vector<int> val;
    for(int i = 1; i <= n; i++) {
        val.push_back(i);
    }
    vector<int> res;

    
    while(size(val) > 1) {
        int s = size(val);
        int sum = val[s-1] + val[s- 2];
        res.push_back(val[s-1]);
        res.push_back(val[s-2]);
        val.pop_back();
        val.pop_back();
        
        if(sum % 2 == 1) val.push_back(sum / 2 + 1);
        else val.push_back(sum / 2);
        
    }
    cout<<val.back()<<endl;
    
    for(int i = 0; i < res.size(); i += 2) {
        cout<<res[i] << " " <<res[i + 1]<<endl;
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
