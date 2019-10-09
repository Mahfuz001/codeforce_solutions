/**
 *  author: mahfuzz
 *  created: 08.10.2019
**/
 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll; 

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
      ll x, y; cin >> x >> y;
      if((x - y) > 1)
        cout << "YES\n";
      else
        cout << "NO\n";
	  }
       
    return 0;
}
