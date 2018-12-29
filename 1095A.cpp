//
//  1095A.cpp
//  
//
//  Created by Mahfuz Ahmed on 12/27/18.
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
    int n;
    string s;
    cin>>n>>s;
    
    cout<<s[0];
    for(int i=2,k=2;i<=n;i+=k,k++){
        cout<<s[i-1];
    }
    cout<<"\n";


    return 0;
}
