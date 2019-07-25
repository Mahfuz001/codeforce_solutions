/**
 * 	author: MahfuzAhmed
 * 	created: 24.07.2019 
**/

#include <bits/stdc++.h>
using namespace std;

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
    
	int q; cin >> q;
    
    while(q--){
        ll a, b, c; cin >> a >> b >> c;
        
        cout << (a+b+c)/2 << "\n";
    }
    

    return 0;
}

