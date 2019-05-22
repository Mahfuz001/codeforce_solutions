//
//  155A.cpp
//  
//
//  Created by Mahfuz Ahmed on 28/2/19.
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
    
    vector<int> points;
    int ap=0;
    bool flag = false;
    
    int n;
    cin>>n;
    
    for (int i=0; i<n; ++i) {
        int x;
        cin>>x;
        
        if(i == 0) {
            points.push(x);
        }else{
            for(int j=0;j<i;++j){
                if(points[j] > x){
                    flag = true;
                }else{
                    flag = false;
                    break;
                }
            }
            if(!flag){
                for(int j=0;j<i;++j){
                    if(points[j] < x){
                        flag = true;
                    }else{
                        flag = false;
                        break;
                    }
                }
            }
            if(flag) ++ap;
            
            points.push(x);
        }
    }
    
    cout<<ap;br;flush;
    
    return 0;
}
