/**
 *  author: mahfuzz
 *  created: 28.10.2019
**/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        
        int cnt = 0;
        cnt += min(b, c/2) * 3;
        b -= min(b, c/2);
        
        cnt += min(a, b/2) * 3;
        
        cout << cnt << "\n";
    }
       
    return 0;
}
