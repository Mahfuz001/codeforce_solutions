//
//  69A.cpp
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
    
    int n,sumX=0,sumY=0,sumZ=0;
    cin>>n;
    
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        sumX+=x;
        sumY+=y;
        sumZ+=z;
    }
    if(!sumX && !sumY && !sumZ){
        cout<<"YES";br;
    }else{
        cout<<"NO";br;
    }
    return 0;
}
