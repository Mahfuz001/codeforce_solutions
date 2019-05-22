//  546A.cpp
//  
//
//  Created by Mahfuz Ahmed on 11/10/18.
//

#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,w,k,tc=0;
    cin >> n >> w >> k;
    
    for(int i=1;i<=k;i++){
        int ans = n*i;
        tc += ans;
    }
    if(tc-w > 0){
        cout << tc - w << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}
