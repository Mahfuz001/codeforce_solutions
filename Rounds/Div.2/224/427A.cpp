/**
 * 	author: MahfuzAhmed
 * 	created: 29.07.2019 
**/

#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define pb push_back

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
    
    int t; cin >> t;
    
    int a = 0, u = 0;
    
    for(int i = 0; i < t ; i++){
        int x; cin >> x;
        int b = 0;
        if(x > 0) a+= x;
        else b+= abs(x);
        
        a -= abs(b);
        
        if(a < 0){
            u++;
            a = 0;
        }
    }
    
    cout << u << "\n";
    
    return 0;
}

