/**
 *  author: krayr
 *  created: 23.05.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define forn(i, s, n) for(ll i = s; i < ll(n); i++)

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
    
    
    int n; cin >> n;
    if(n == 0){
        cout << "1\n";
        return 0;
     }
    
    int x = n % 4;
    
    if(x == 1)
        cout << "8\n";
    else if(x == 2)
        cout << "4\n";
    else if(x == 3)
        cout << "2\n";
    else if(x == 0)
        cout << "6\n";
        
    
    
    return 0;
}
