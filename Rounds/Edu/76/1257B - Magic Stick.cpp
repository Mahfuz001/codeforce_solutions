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
        int x, y; cin >> x >> y;
        if(x == y || x > y || x >= 4 || (x == 2 && y <= 3) || (x > 1 && y <= 3)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
       
    return 0;
}
