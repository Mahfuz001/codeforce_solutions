//
//  124A.cpp
//  
//
//  Created by Mahfuz Ahmed on 11/6/18.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,a,b;
    cin >> n >> a >> b;
    
    cout << n-max(a+1,n-b)+1<<endl;
    
    return 0;
}
