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
    
    string s; cin >> s;
    
    int r = 0;
    int curr = 'a';
    
    for(int i=0; s[i]; i++){
        
        
        int a = abs(s[i] - curr);
        
        r+= min(a, 26-a);
        
        curr = s[i];
    }
    
    
    
    cout << r << "\n";
    
    
    return 0;
}

