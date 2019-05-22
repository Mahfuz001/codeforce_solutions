//
//  1090M.cpp
//  
//
//  Created by Mahfuz Ahmed on 12/31/18.
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
    int n,k,counter=0,pre=0;
    vector<int> vec(100000);
    
    cin>>n>>k;
    while(n--){
        int x;
        cin>>x;
        if(x != pre){
            if(vec[counter-1] == 1){
                counter -=1;
                vec[counter]++;
                pre = x;
            }else{
                vec[counter]++;
                pre = x;
            }
        }else{
            counter++;
            vec[counter]++;
            pre = x;
            counter++;
        }
    }
    sort(vec.begin(),vec.end());
    cout<<vec.back();br;
    return 0;
}
