//
//  80A.cpp
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

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    #if 0
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int n,m,pos=0;
    cin>>n>>m;
    
    for(int i=0;i<16;i++){
        if(primes[i] == n){
            pos=i;
        }
    }
    if(primes[pos+1] == m){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    
    return 0;
}
