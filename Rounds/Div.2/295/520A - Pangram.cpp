/**
 *  author: mahfuzz
 *  created: 15.11.2019
**/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    set<char> c;
    
    int n; cin >> n;
    string s; cin >> s;
    
    if(n < 26){
        cout << "NO\n";
        return 0;
    }else {
        for(int i = 0; s[i]; i++){
            c.insert(tolower(s[i]));
        }
    }
    
    if(c.size() >= 26)
        cout << "YES\n";
    else
        cout << "NO\n";
    
       
    return 0;
}
