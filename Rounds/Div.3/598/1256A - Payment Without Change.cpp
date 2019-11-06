/**
 *  author: mahfuzz
 *  created: 04.11.2019
**/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        
        ll num1 = min(a, s/n) * n;
        if(s - num1 <= b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
       
    return 0;
}
