//
//  1A.cpp
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
    
    long long n,m,a,ans=0;
    cin>>n>>m>>a;
    
    ans = ceil(double(n)/double(a))*ceil(double(m)/double(a));
    cout<<ans;br;
    
    return 0;
}
