/**
 *  author: mahfuzz
 *  created: 14.10.2019
**/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t; cin >> t;
    double a, b, c, d, k;
    while(t--){
        cin >> a >> b >> c >> d >> k;
        int p = ceil(a / c);
        int p2 = ceil(b / d);
        
        if(p + p2 <= k)
            cout << p << " " << p2 << "\n";
        else
            cout << "-1\n";
        
    }
       
    return 0;
}
