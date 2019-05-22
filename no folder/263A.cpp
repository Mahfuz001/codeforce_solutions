//
//  263A.cpp
//  
//
//  Created by Mahfuz Ahmed on 1/1/19.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define br std::cout << "\n";
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
    
    int x=0,pos=0,wR=0,moves=0;
    while(true){
        cin>>x;
        pos++;
        if(x>0) break;
    }
    wR = (pos+4)/5;
    if(wR == 3){
        moves = abs(13-pos);
    }else if(wR>3){
        pos-= (wR-3)*5;
        moves = abs(13-pos)+(wR-3);
    }else{
        pos+= (3-wR)*5;
        moves = abs(13-pos)+(3-wR);
    }
    cout<<moves;br;
    
    return 0;
}
