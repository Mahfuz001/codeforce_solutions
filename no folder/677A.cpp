//
//  677A.cpp
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
    
    int n,h,r=0;
    cin >> n >> h;
    while(n--){
        int x;
        cin>>x;
        if(x > h) r+=2;
        else r++;
    }
    cout << r << endl;
    
return 0;
}
