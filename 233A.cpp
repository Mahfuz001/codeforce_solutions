//
//  233A.cpp
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
    
    vector<int> vec(100);
    int n;
    cin>>n;
    
    if(n % 2 == 0){
        for(int i=1;i<=n;i++){
            vec[i] = i+1;
            vec[i+1] = i;
            i+=1;
        }
        cout<<vec[1];flush;
        for(int i=2;i<=n;i++){
            cout<<" "<<vec[i];
            flush;
        }
        br;
    }else{
        cout<<"-1";br;
        flush;
    }
    
    
    
    return 0;
}
