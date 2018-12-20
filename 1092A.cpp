//
//  1092A.cpp
//  
//
//  Created by Mahfuz Ahmed on 12/18/18.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define br std::cout << "\n";

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    #if 0
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout)
    #endif
    
    int t;
    cin>>t;
    while(t--){
        int n,k,fre=0,cnt=1;
        char p = 97;
        cin>>n>>k;
        fre = n/k;
        if(n%k == 0){
            for(int i=0;i<n;i+=fre){
                for(int j=0;j<fre;j++){
                    cout << p;
                }
                if(cnt <= k){
                    cnt++;
                    p++;
                }else{
                    cnt=1;
                    p=97;
                }
            }
            p=97;
            cnt=1;
        }else{
            int diff = n - (fre*k);
            for(int i=0;i<n-diff;i+=fre){
                for(int j=0;j<fre;j++){
                    cout << p;
                }
                if(cnt <= k){
                    cnt++;
                    p++;
                }else{
                    cnt=1;
                    p=97;
                }
            }
            p=97;
            for(int i=0;i<diff;i++){
                cout << p;
                p++;
            }
            p=97;
            cnt=1;
        }
        cout << "\n";
    }
    
    
    
return 0;
}
