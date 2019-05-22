//
//  1097A.cpp
//  
//
//  Created by Mahfuz Ahmed on 1/4/19.
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
    string s;
    cin>>s;
    
    int n=5;
    while (n--) {
        string x;
        cin>>x;
        if (s[0] == x[0] || s[1] == x[1]) {
            cout<<"YES";br;flush;
            return 0;
        }
    }
    cout<<"NO";br;flush;
    
    
    return 0;
}
