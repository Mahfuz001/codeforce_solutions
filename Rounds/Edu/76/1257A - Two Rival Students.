/**
 *  author: mahfuzz
 *  created: 13.11.2019
**/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n, x, a, b;
        cin >> n >> x >> a >> b;
        
        int c = min(a, b);
        int d = max(a, b);
        
        int e = min(c - 1, x);
        c -= e;
        x -= e;
        
        int f = min(n - d, x);
        d += f;
        
        cout << abs(c - d) << "\n";
        
    }
       
    return 0;
}
