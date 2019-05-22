//
//  318A.cpp
//  
//
//  Created by Mahfuz Ahmed on 12/31/18.
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
    freopen("output.txt","w",stdout)
    #endif
    
    lli n,k,num;
    cin>>n>>k;
    
    if(k<=(n+1)/2)
        num = k*2-1;
    else{
        k -= (n+1)/2;
        num = k*2;
    }
    cout<<num;br;
    
    return 0;
}
