//
//  144A.cpp
//  
//
//  Created by Mahfuz Ahmed on 1/3/19.
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
    
    int n,time,sN=1,bN=0,prev=0,prev2=100;
    cin>>n;
    
    for(int i=1;i<=n;i++) {
        int x;
        cin>>x;
        
        if(x>prev){
            bN = i;
            prev = x;
        }
        if(x<=prev2){
            sN = i;
            prev2 = x;
        }
        
    }
    time = (bN-1)+(n-sN);
    (bN>sN) ? (cout<<time-1) : (cout<<time);
    br;
    flush;
    
    
    return 0;
}
