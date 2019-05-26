/**
 *  author: MahfuzAhmed
 *  created: 26.05.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define forn(i, s, n) for(int i = s; i < int(n); i++)

typedef long long ll;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int MAX_N = 1e6+5;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    ll n, m; cin >> n >> m;
    ll arr[m];
    
    forn(i, 0, m) cin >> arr[i];
    
    ll curr = 1;
    ll time = 0;
    
    forn(i, 0, m){
        
        if(curr > arr[i]){
            time += (n-curr)+1;
            time += arr[i]-1;
            curr = arr[i];
            
        }else{
            time += arr[i]-curr;
            curr = arr[i];
        }
    }
    
    cout << time << "\n";
    
    
    return 0;
}
