//
//  236A.cpp
//  
//
//  Created by Mahfuz Ahmed on 11/7/18.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    set<char> set;
    string s;

    cin >> s;
    for(auto a:s){
        set.insert(a);
    }
    
    
    if(set.size() % 2 == 0){
        cout << "CHAT WITH HER!\n";
    }else{
        cout << "IGNORE HIM!\n";
    }
    
    return 0;
}
