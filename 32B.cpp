//
//  32B.cpp
//  
//
//  Created by Mahfuz Ahmed on 1/2/19.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define br std::cout << "\n";
#define push push_back

const double pi = 2*acos(0.0);
const long long mod = 1e9+7;

int strlen(string s,bool isString){
    int counter=0;
    for(int i=0;s[i];i++){
        counter++;
    }
    return counter;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    #if 0
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    string tCode,decodedTcode="";
    getline(cin,tCode);
    
    int tCodeSize = strlen(tCode,1);
    
    for(int i=0;i<=tCodeSize-1;i++){
        if(tCode[i] == '.'){
            decodedTcode+="0";
        }else if(tCode[i] == '-' && tCode[i+1] == '.'){
            decodedTcode+="1";
            i+=1;
        }else if(tCode[i] == '-' && tCode[i+1] == '-'){
            decodedTcode+="2";
            i+=1;
        }
    }
    cout<<decodedTcode;br;
    
    return 0;
}
