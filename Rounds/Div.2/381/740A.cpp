/**
 * 	author: krayr
 * 	created: 22.05.2019
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
    
	ll n, a, b, c; cin >> n >> a >> b >> c;
    
    if(n % 4 == 0){
        cout << "0\n";
    }
    else{
        ll d = 4 - (n%4);
        
        if(d == 1)
            cout << min(a,min(b+c, c*3));
        if(d == 2)
            cout << min(a*2,min(b, c*2));
        if(d == 3)
            cout << min(a*3,min(b+a,c));
        cout << "\n";
    }
    

    return 0;
}
