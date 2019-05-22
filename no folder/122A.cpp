//
//  122A.cpp
//  
//
//  Created by Mahfuz Ahmed on 11/8/18.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout << (n % 4 == 0 || n % 7 == 0 ||
             n % 47 == 0 || n % 74 == 0 ||
             n % 477 == 0 ? "YES":"NO")<<endl;
    
    return 0;
}
