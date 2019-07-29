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
    
    int a, b, c, d; cin >> a >> b >> c >> d;
    
    string s; cin >> s;
    
    int cal = 0;
    
    for(int i = 0; s[i]; i++){
        if(s[i] == '1'){
            cal += a;
        }else if(s[i] == '2'){
            cal += b;
        }else if(s[i] == '3'){
            cal += c;
        }else if(s[i] == '4'){
            cal += d;
        }
    }
    
    cout << cal << "\n";
    
    
    return 0;
}

