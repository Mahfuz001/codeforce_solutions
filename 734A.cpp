//
//  734A.cpp
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
    
    int n,A=0,D=0;
    string s;
    cin>>n>>s;
    
    for (int i=0; i<n; i++) {
        if(s[i] == 'A'){
            A++;
        }else{
            D++;
        }
    }
    if(A==D){
        cout<<"Friendship";br;
    }else if(A>D){
        cout<<"Anton";br;
    }else{
        cout<<"Danik";br;
    }
    flush;
    
    return 0;
}
