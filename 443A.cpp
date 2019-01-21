//
//  443A.cpp
//  
//
//  Created by Mahfuz Ahmed on 1/21/19.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define br std::cout << "\n";
#define flush std::cout<<flush;
#define push push_back

const double pi = 2*acos(0.0);
const long long mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    #if 0
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int arr[122];
    memset(arr,0,sizeof(arr));
    
    string s;
    getline(cin,s);
    
    for(int i=0;s[i];i++){
        int x = s[i];
        if(x >= 97 && x <= 122){
            arr[x] = 1;
        }
    }
    
    int count = 0;
    
    for(int i=97;i<=122;i++){
        if(arr[i] == 1){
            count++;
        }
    }
    cout<<count;br;
    
    
    return 0;
}
