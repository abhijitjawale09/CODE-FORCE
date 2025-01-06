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
        string s;
        cin>>s;
        int n = s.length();
        int zero = 0,even = 0,sum = 0;
  
        for(int i=0; i<n; i++){
            int temp = s[i] - '0';
            sum += temp;
            if(temp == 0){
                zero++;
            }
            if(temp % 2 == 0){
                even++;
            }
        }
        if((sum % 3 == 0 && zero > 0) && even >= 2){
            cout<<"red\n";
        }
        else{
            cout<<"cyan\n";
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
