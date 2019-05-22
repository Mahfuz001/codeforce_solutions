//
//  59A.cpp
//  
//
//  Created by Mahfuz Ahmed on 12/15/18.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define br std::cout << std::endl;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    #if 0
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout)
    #endif
    
    string s;
    getline(cin,s);
    
    int up=0,low=0;
    for (int i=0; s[i]; i++) {
        if(s[i] > 96) low++;
        else up++;
    }
    if(low < up){
        for (int i=0; s[i]; i++) {
            if(s[i] > 96) s[i]-=32;
        }
    }else{
        for (int i=0; s[i]; i++) {
            if(s[i] < 97) s[i]+=32;
        }
    }
    cout << s << endl;
    
return 0;
}
