//
//  1091A.cpp
//  
//
//  Created by Mahfuz Ahmed on 12/30/18.
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
    
    int a,b,c,maxOrment=0;
    cin>>a>>b>>c;
    cout<<(min(a,min(b-1,c-2))*3)+3;br;
    
    return 0;
}
