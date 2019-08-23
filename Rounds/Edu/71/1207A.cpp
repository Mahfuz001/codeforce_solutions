/**
 *  author: MahfuzAhmed
 *  created: 22.08.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int max_n = 1e6+5;
typedef long long ll;


int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int t; cin >> t;
    
    while(t--){
        int b, p, f; cin >> b >> p >> f;
        int h, c; cin >> h >> c;
        
        
        
        if(b < 2){
            cout << 0 << "\n";
        }else{
            
            int pr1 = 0, pr2 = 0;
               
            int b2 = b / 2;
            
            b /= 2;
            
            int p1 = p, f1 = f;
            
            while(p1 > b2 && p1 >= 0)
                p1--;
                
            b2 -= p1;
            pr1 += p1 * h;
            
            while(f1> b2 && f1 >= 0)
                f1--;
            b2 -= f1;
            pr1 += f1 * c;
            
            
            
            while(f> b && f >=0)
                f--;
            b -= f;
            pr2 += f * c;
            
            while(p > b && p>=0)
                p--;
                
            b -= p;
            pr2 += p * h;
            
            
            
            
            
            cout << max(pr1, pr2) << "\n";
        }
        
        
        
    }
    
    
    return 0;
}
