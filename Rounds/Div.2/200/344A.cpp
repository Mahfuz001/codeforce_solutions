/**
 * 	author: MahfuzAhmed
 * 	created: 27.07.2019 
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
    
    int n; cin >> n;
    
    int cnt = 1;
    
    int prev;
    
    int x; cin >> x;
    n--;
    
    prev = x;
    
    while(n--){
        int y; cin >> y;
        
        if(y != prev){
            cnt++;
            prev = y;
        }
        
    }
    
    cout << cnt << "\n";
    
    
    return 0;
}

