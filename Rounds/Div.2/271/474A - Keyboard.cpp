/**
 *  author: mahfuzz
 *  created: 15.11.2019
**/
 
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
typedef long long ll;
 
 
int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int arr[30] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',59,'z','x','c','v','b','n','m',44,46,47};    
    char c; cin >> c;
    string s; cin >> s;
    
    for(int i = 0; s[i]; i++){
        for(int j = 0; j < 30; j++){
            if(s[i] == (char)arr[j]){
                if(c == 'R'){
                    cout << (char)arr[j-1];
                    break;
                }else{
                    cout << (char)arr[j+1];
                    break;
                }
            }
        }
    }
    
    cout << "\n";
    return 0;
}
