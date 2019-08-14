/**
 * 	author: MahfuzAhmed
 * 	created: 11.08.2019 
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
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
    
    int n; cin >> n;
    
    string s; cin >> s;
    
    int arr[10] = {0};
    
    for(int i = 0; s[i]; i++){
        
        if(s[i] == 'L'){
            for(int j = 0; j < 10; j++){
                if(arr[j] != 1) {
                    arr[j] = 1;
                    break;
                }
            }
        }else if(s[i] == 'R'){
            for(int j = 9; j >= 0; j--){
                if(arr[j] != 1) {
                    arr[j] = 1;
                    break;
                }
            }
        }else{
            arr[s[i] - '0'] = 0;
        }
    }
    
    for(int i=0; i< 10; i++){
        cout << arr[i];
    }
    cout << "\n";
    
    
    return 0;
}
